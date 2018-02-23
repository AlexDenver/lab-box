#include<iostream>
using namespace std;
typedef struct {
	int h,m,s;

}mTime;
int main(){
	mTime t1;
	long totalsec;
	cout<<"Enter Time H M S:";
	cin>>t1.h>>t1.m>>t1.s;
	cout<<"The Time Entered is: "<<t1.h<<":"<<t1.m<<":"<<t1.s<<"\n";
	totalsec = 3600*t1.h + 60*t1.m + t1.s;
	cout<<"Total Time in Seconds: "<<totalsec<<"\n\n";
}
