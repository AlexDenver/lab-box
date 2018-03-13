#include<stdio.h>
void main(){
	int t,n,rem,rev;
	printf("Enter a Number:");
	scanf("%d",&n);
	t=n;
	while(t>0){
		rem=t%10;
		rev=(rev*10)+rem;
		t/=10;
	}
	printf("Reverse of %d is %d\n",n,rev);
}