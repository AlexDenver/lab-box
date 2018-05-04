#include<iostream>
using namespace std;
class A{
	public: 
		int add(int a, int b){
			return a+b;
		}
};

class B: {
	public:
		int sub(int a, int b){
			return a-b;
		}
};
class C: public B,public A{
	public:
			int mul(int a, int b){
				return a*b;
			}
};
int main(){
	C obj;
	cout<<"10-5 is "<<obj.sub(10,5);
	cout<<"\n10+5 is "<<obj.add(10,5);
	cout<<"\n10*5 is "<<obj.mul(10,5);
}