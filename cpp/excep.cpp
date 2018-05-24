#include<iostream>
using namespace std;
class myExcep{
	public: 
		void tell(){
			cout<<"\nFatal Exception Occured\n";
		}
};
int main(){
	myExcep e;
	cout<<"\nBefore Try";
	try{
		if(1!=2)
			throw x;
	}catch(myExcep e){
		e.tell();
	}
	cout<<"\nAfter Try\n";
}