#include<iostream>
using namespace std;
#define MAX 10
template <class d>
class Stack{
	private: 
		d stack[MAX];
		int top;
	public: 
		Stack(){
			top=-1;
		}
		bool ovfl(){
			if((top+1)==MAX){
				cout<<"\tOverflow!\n";
				return true;
			}
			
			return false;
		}
		bool unfl(){
			if(top==-1){
				cout<<"\tUnderflow!\n";
				return true;				
			}
			return false;
		}
		void push(x ele){
			if(ovfl())
				return;
			stack[++top]=ele;
		}
		d pop(){
			if(unfl())
				return -1;
			return stack[top--];
		}
		void display(){
			cout<<"\n";
			for(int i=0;i<=top;i++)
				cout<<"\t"<<stack[i];
		}
};

int main(){
	Stack <int,int>s;
	s.pop();
	s.push(10);
	s.push(20);
	s.push(30);
	s.display();
	s.push(40);
	s.push(50);
	s.push(60);
	s.push(100);
	s.push(200);
	s.push(300);
	s.display();
	cout<<"\n\t"<<s.pop()<<" was popped"<<endl;
	s.display();
}
