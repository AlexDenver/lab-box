#include<stdio.h>
int sum(int n){
	if(n==0)
		return n;
	else if(n<0)
		return 0;
	else
		return n+sum(n-1);
}
void main(){
	int n;
	printf("Enter Last Number in the Series: ");
	scanf("%d",&n);
	printf("Sum of the Series 1+2+..+%d is %d\n\n",n,sum(n));

}
