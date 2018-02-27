#include<stdio.h>
int fact(int n){
	if(n==0 || n==1)
		return 1;
	else
		return n*fact(n-1);
}
void main(){
	int n;
	printf("Enter a Number:");
	scanf("%d",&n);
	printf("\nFactorial of %d is %d\n\n",n,fact(n));
}
