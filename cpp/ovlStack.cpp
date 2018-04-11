#include<iostream>
#define MAX 10
using namespace std;
class Stack{
	private:
		int stack[MAX],top;
	public:
		Stack(){
			top=-1;
		}
		bool overFlow(){
			if((top+1)>=MAX)
				return true;
			return false;
		}
		bool underFlow(){
			if(top==-1)
				return true;
			return false;
		}
		void operator++(){
			int ele;
			if(overFlow()){
				cout<<"Stack Overflow: Stack Full Cannot Add More Elements!\n";
				return;
			}
			cout<<"Enter Element to be Added: ";
			cin>>ele;
			this->stack[++top]=ele;
		}
		void operator--(){
			int ele;
			if(underFlow()){
				cout<<"Stack Underflow: No Elements to Pop!";
				return;
			}
			ele=this->stack[top--];
			cout<<ele<<" was Popped out of Stack";
		}
		void operator--(Stack x){
			int ele;
			if(underFlow()){
				cout<<"Stack Underflow: No Elements to Pop!";
				return;
			}
			ele=x->stack[top--];
			cout<<ele<<" was Popped out of Stack";
		}
		void display(){
			cout<<"Stack elements ";
			for(int i=0;i<=top;i++)
				cout<<" "<<stack[i];
		}

};

int main(){
	Stack s;
	int op;
	do{
		cout<<"\n1) Push\t\t\t2) Pop\n3) Display\t*) Exit";
		cout<<"\nEnter Choice:";
		cin>>op;
		switch(op){
			case 1: ++s;
				break;
			case 2: --s;
				break;
			case 3: s.display();
				break;			
			
		}
	}while(op<=4);
}
