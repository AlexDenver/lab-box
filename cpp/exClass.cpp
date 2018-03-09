#include<iostream>
using namespace std;
class exClass{
	public:
		exClass(int i){
			val = i;
		};
		int double_val(){
			return val*2;
		}
		int val;
};

int main(){
	int exClass::*data;
	int (exClass::*funct)();
	exClass ob1(10),ob2(12);

	data = &exClass::val;
	funct = &exClass::double_val;

	cout<<"Values:\n";
	cout<<(ob1.*data)<<" "<<ob2.*data<<"\n";
	cout<<"Double Values:\n";
	cout<<(ob1.*funct)()<<" "<<(ob2.*funct)()<<"\n";
	return 0;
}