#include<iostream>
using namespace std;

template <class dtype>
void swap(dtype *m, dtype *n){
	dtype t;
	t=*m;
	*m=*n;
	*n=t;		
}
int main(){
	int a=10,b=20,c;
	float x=1.1,y=2.1;
	cout<<"B4\t\t"<<x<<","<<y;	
	swap(&x,&y);	
	cout<<"\nAFTER\t\t"<<x<<","<<y;
	// cout<<"\n\nB4\t\t"<<a<<","<<b;	
	// swap(&a,&b);
	// cout<<"\nAFTER\t\t"<<a<<","<<b;
}
