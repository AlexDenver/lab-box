#include <iostream>
#include <fstream>
#include <string.h>
#include <malloc.h>
using namespace std;
typedef struct 
{
	char name[25];
	int id,sal,hra,da;
}emp;

void set(){
	fstream out("employee.txt", ios::out|ios::app);
	int ch;
	emp e;
	do{		
		cout<<"Enter employee details(id,sal)";
		cin>>e.id>>e.sal;
		e.da = e.sal * 0.1;
		e.hra = e.sal * 0.05;
		out.write((char*) &e, sizeof(emp));
		cout<<"Do you want to Continue?(1/*)";
		cin>>ch;
		if(ch!=1)break;
	}while(1);

	out.close();
}

void get(){
	emp e;
	ifstream file("employee.txt");
	cout<<"EID\t"<<"DA\t"<<"HRA\t"<<"Gross Salary\t";
	while(file.read((char*) &e, sizeof(emp)))  	
		cout<<"\n"<<e.id<<"\t"<<e.da<<"\t"<<e.hra<<"\t"<<(e.sal+e.da+e.hra);	
	file.close();
}

void search(char *name){
	emp e;
	ifstream file("employee.txt");	
	while(file.read((char*) &e, sizeof(emp)))  	
		if(strcmp(e.name, name))
			cout<<"\n"<<e.id<<"\t"<<e.da<<"\t"<<e.hra<<"\t"<<(e.sal+e.da+e.hra);
	file.close();
}

int main(){
	emp e;
	int ch;
	do{
		cout<<"1) Write Employee Data\t2) Get All Employees\n3) Search Employee\t 4) Exit\n";
		cout<<"Enter Choice: ";
		cin>>ch;
		switch(ch){
			case 1: 
				set();
				break;
			case 2: 
				get();
				break;
			case 3:
				char *n;
				cout<<"enter employee name";
				cin>>n;
				search(n);
				break;
			case 4:
				break;
		}
	}while(ch<=4);
	
	// cout<<text;
	return 0;
}