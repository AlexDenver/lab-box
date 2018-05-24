#include <iostream>
#include <fstream>
#include <string.h>
#include <malloc.h>
using namespace std;
typedef struct 
{
	int id,sal,hra,da;
}emp;
int main(){
	emp e;
	int ch;
	fstream out("employee.txt", ios::out|ios::app);
	do{		
		cout<<"Do you want to enter Records?(1/*)";
		cin>>ch;
		if(ch!=1)break;
		cout<<"Enter employee details(id,sal)";
		cin>>e.id>>e.sal;
		e.da = e.sal * 0.1;
		e.hra = e.sal * 0.05;
		out.write((char*) &e, sizeof(emp));
	}while(1);
	out.close();
	ifstream file("employee.txt");
	cout<<"EID\t"<<"DA\t"<<"HRA\t"<<"Gross Salary\t";
	while(file.read((char*) &e, sizeof(emp)))  	
		cout<<"\n"<<e.id<<"\t"<<e.da<<"\t"<<e.hra<<"\t"<<(e.sal+e.da+e.hra);	
	file.close();
	// cout<<text;
	return 0;
}