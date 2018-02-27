#include<stdio.h>
int gcd(int a,int b){
	if(a==b)
		return a;
	else if(a>b)
		a=a-b;
	else
		b=b-a;
	gcd(a,b);
}
void main(){
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("GCD of %d and %d is %d\n\n",a,b,gcd(a,b));
}
