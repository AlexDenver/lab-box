#include<stdio.h>
void main(){
	int n,fact=1,t;
	printf("\n\nEnter a Number(>0): ");
	scanf("%d",&n);
	t=n;
	while(t>1)
	fact*=t--; 	
	printf("\n\nFactorial of %d is %d\n\n",n,fact);
}	
