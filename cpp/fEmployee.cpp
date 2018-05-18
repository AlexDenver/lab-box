#include<iostream>
#include <fstream>
#include <string.h>
using namespace std;

class employee{
	private:
		int da,hra,id;
		fstream file;
	public:
		employee(){
			da=hra=id=0;
			file.open ("employee.txt", ios::app | ios::out | ios::in);

		};
		void setData(employee a){
			cout<<"\nEnter Employee Data:(id,da,hra):";
			cin>>id>>da>>hra;			
			file.write((char*) &a,sizeof(employee));

		}
		void getData(){
			cout<<"\n"<<id<<"\t"<<da<<"\t"<<hra<<"\t";
		}
		
};

int main(){
	employee a[3];
	for (int i = 0; i < 3; i++)
	{
		a[i].setData(a[i]);
	}
	cout<<"Employee Details.\n";
	cout<<"EID\t"<<"DA\t"<<"HRA\t"<<"DESIG\t"<<"Status";
	for (int i = 0; i < 3; i++)
	{
		a[i].getData();
	}
	return 0;
}