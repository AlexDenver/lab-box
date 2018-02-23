#include<iostream>
using namespace std;
class smallObj{
	private:
		int data;		
	public:
		smallObj(int x, string s){
			cout<<"\nHello "<<s<<", From Constructor";
			data = x;
		}
		smallObj(){
			cout<<"\nA Simple Constructor\n";
		}
		void setData(int in){
			data=in;
		}
		void getData(){
			cout<<"\n\nCurrent Data:"<<data<<"\n\n";
		}
		void exterFunc(int);
};
void smallObj::exterFunc(int x){
	cout<<"\nAn External Function";
	data = x;
}


int main(){
	smallObj s1(1001, "Alex"), s2[5];
	s1.getData();
	s1.setData(10);
	s1.getData();
	s1.exterFunc(100);
	s1.getData();
}
