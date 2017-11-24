#include<stdio.h>
void main(){
	printf("\n\n%d\n\n",(1==1?x():0));
}

int x(){
	if(4%2){
		printf("\nHello\n");
	}
	return 0;
}
