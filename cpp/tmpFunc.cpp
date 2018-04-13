#include<iostream>
using namespace std;

template <class dtype,class dtype2>
double add(dtype m, dtype2 n){
	return m+n;
}
//template <class dtype>
//dtype add(dtype op1,dtype op2){
//	cout<<"Func1\n\n"<<endl;
//	return (op1+op2);
//}
int main(){
	int a=10,b=20;
	float x=1.1,y=2.1;
	cout<<"Int Sum: "<<add(a,b)<<endl;
	cout<<"Float Sum: "<<add(x,y)<<endl;
	cout<<"Float Int Sum: "<<add(x,b)<<endl;
}
