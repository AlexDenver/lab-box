#include<iostream>
using namespace std;
enum status
{
	cur,
	ex
};
enum desig{
	mgr,
	sales,
	support
};
class employee{
	private:
		int da,hra,id;
		desig d;
		status s;
	public:
		employee(){
			da=hra=id=0;
		};
		void setData(){
			cout<<"\nEnter Employee Data:(id,da,hra):";
			cin>>id>>da>>hra;
			cout<<"\n Enter Status(cur/ex):";
			cin>>s;
			cout<<"\n Enter Designation(mgr/sales/support)):";
			cin>>d;
		}
		void getData(){
			cout<<"\n"<<id<<"\t"<<da<<"\t"<<hra<<"\t"<<d<<"\t"<<s;
		}
		
};

int main(){
	employee a[3];
	for (int i = 0; i < 3; i++)
	{
		a[i].setData();
	}
	cout<<"Employee Details.\n";
	cout<<"EID\t"<<"DA\t"<<"HRA\t"<<"DESIG\t"<<"Status";
	for (int i = 0; i < 3; i++)
	{
		a[i].getData();
	}
	return 0;
}