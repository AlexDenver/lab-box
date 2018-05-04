
#include<iostream>
using namespace std;
class A{
	public:
		void displayA(){
			cout<<"\nDisplay A";
		}
};

class B{
	public:
		void displayB(){
			cout<<"\nDisplay B";
		}
};
class D: public A{
	
};



class C: public A,public B{
	public:	
		void display(){
			cout<<"\nDisplay C";
		}

};










class X{
	public:
		void disp(){
			cout<<"\nDisplay X";
		}

};

class Y:public X{
	public:		
		void display(){
			cout<<"\nDisplay Y";
		}

};


class Z:public Y{
	public:
		void display(){
		
		
			cout<<"\nDisplay Z";
		}
};



int main(){
	Z obj;
	obj.display();	
	obj.disp();
}
