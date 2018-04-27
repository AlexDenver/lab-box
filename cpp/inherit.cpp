#include<iostream>
using namespace std;
class base{
	private:
		int a;
	public:
		base(){
			cout<<"\nBase Class Init()";
		}
		base(int x){
			a = x;
			cout<<"\nNumber:"<<a;
			cout<<"\nBase Class Init(int)";
		}
		int getA(){
			cout<<"\nGet A Base";
			return a;
		}
};
class derived:public base{
	private:
		int b;
	public:
		derived(int y):base(y){
			b=y;
			// base:
			//base:functionName();
			cout<<"\nDerived Class Init()";
		}
		// int getA(){
		// 	cout<<"\nGet a Derived";
		// 	return base::getA();
		// }
		void display(){
			cout<<"\nDisplay Derived";
			cout<<"\nNumber:"<<getA();
		}
};


class derived_l2:derived{
	public:
		derived_l2(){
			cout<<"\nDerived L2; \nProtected A:";
		}
		derived_l2(int x):derived(x){
			cout<<"\nDerived L2; \nProtected A:"<<getA();
		}
	virtual void derive();
};


class derived_l2_1:derived_l2{

	public:
		void derive(){
			cout<<"\nDerived\n";
		}



};


class derived_l3:public derived_l2{
	public:
		derived_l3(int x):derived_l2(x){
			cout<<"\nDerived L3; \nPrivate A:";//<<getA();
		}
	private: 

};



int main(){
	derived d(10);
	derived_l2_1 dx;
	cout<<endl<<d.getA()<<" Number";
	d.display();
	return 0;
}
