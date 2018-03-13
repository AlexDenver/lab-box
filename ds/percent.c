#include<stdio.h>
void percent(int n){
	static int i=0;
	
	if(++i>100)
		return;
	else
		printf("%d percent of %d is %.2f\n",i,n,((double)((n*i)/100)));
	percent(n);
}
void main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);

	percent(n);
}