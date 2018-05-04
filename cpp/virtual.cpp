#include<iostream>
using namespace std;

class myClass{
	int a;
	public:
		myClass(){
			a=10;
		}
		int operator+(myClass *rhs){
			return a		-		(rhs->a);
		}
		int sum(int sb){
			return a+sb;
		}
};
int main(){
	myClass obj1,obj2,obj3;

	cout<<obj3.sum(10);

	obj3.a = obj1+obj2;
}