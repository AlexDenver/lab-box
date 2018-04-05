#include<iostream>
using namespace std;
class relOp{
	private:
		int a;
	public: 
		relOp(int x){
			a=x;
		}
		bool operator>(relOp rhs){
			return (a > rhs.a);
		}	
		bool operator<(relOp rhs){
			return (a < rhs.a);
		}	
};

int main(){
	relOp num1(10),num2(20);
	if(num1>num2)
		cout<<"A is Greater than B";
	else
		cout<<"B is Greater than A";
}

