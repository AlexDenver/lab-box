#include<iostream>
#include<stdlib.h>
using namespace std;
class relOp{
	private:
		int a;
	public: 
		relOp(int x){
			a=x;
		}
		bool operator >(relOp rhs){
			return (a > rhs.a);
		}	
		bool operator <(relOp rhs){
			return (a < rhs.a);
		}	
		void* operator new(size_t x){
			cout<<"New Overloaded\n";
			// cout<<sizeof(size_t)<<"\n";
			return ::new relOp(x);
		}
		void operator delete(void * p){
			cout<< "Overloading delete operator " << endl;
			cout<<p<<endl;	
			free(p);
	    }
};

int main(){
	relOp num1(10) ,num2(20);
	relOp *a = new relOp(5);
	relOp *addr = new relOp(3);
		cout<<"\nAddress1: "<<a<<endl;	
		delete(a);
		cout<<"\nAddress2: "<<addr<<endl;	
		delete(addr);
	cout<<"Num1 Deleted\n";
	if(num1>num2)
		cout<<"A is Greater than B";
	else
		cout<<"B is Greater than A";
}

