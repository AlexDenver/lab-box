#include<stdio.h>
#define MAX 100

typedef struct {
	int ar[MAX],top=-1;
}stack;

void push(stack s,int ele){
	if((s.top+1)>MAX)
		printf("Stack Overflow!\n");
	else
		s.ar[top++] = ele;
}
int pop(stack s){
	if((s[top]-1) == -1)
		printf("Stack Underflow\n");
	else 
		return (s.ar[top--]);
}
void display(stack s){	
	while(s.arr[])
}
void main(){
	stack s;
}