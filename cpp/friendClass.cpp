#include<iostream>
using namespace std;
class B;
class A{
	private:
		int a;
	public:
		A(){
			a = 10;			
		};
		friend int add(A,B);
		
};
class B{
	private:
		int b;
	public:
		B(){
			b = 10;			
		};
		friend int add(A,B);		
};
int add(A x,B y){
	return x.a+y.b;
}
int main(){
	B b;
	A a;
	cout<<"Num:"<<add(a,b);
	return 0;
}