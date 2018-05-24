#include<iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
using namespace std;

class employee{
	private:
		int da,hra,id,sal;
		fstream file;
	public:
		employee(){
			da=hra=id=0;
			file.open ("employee.txt", ios::app | ios::in);

		};
		void setData(){
			cout<<"\nEnter Employee Data:(id,salary):";
			cin>>id>>sal;			
			da=sal*0.1;
			hra=sal*0.05;
			file.write((char*) this,sizeof(employee));

		}
		void getData(){
			employee e;
			file.getline((employee*) e, sizeof(employee));
			cout<<"\n"<<e.id<<"\t"<<e.da<<"\t"<<e.hra<<"\t"<<(e.sal+e.da+e.hra);
		}
		
};



int main(){
	employee a[3];
	// for (int i = 0; i < 3; i++)
	// {
	// 	a[i].setData();
	// }
	cout<<"Employee Details.\n";
	cout<<"EID\t"<<"DA\t"<<"HRA\t"<<"Gross Salary\t";
	for (int i = 0; i < 3; i++)
	{
		a[i].getData();
	}
	return 0;
}