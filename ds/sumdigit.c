#include<stdio.h>
int digicount(int n){
	static int sum=0;
	if(n==0)
		return 0;
	else
		return sum + (n%10) + digicount(n/10);

}
void main(){
	int no;
	printf("Enter a Number:\n");
	scanf("%d",&no);
	printf("Sum of Digits in %d is %d\n",no,digicount(no));
}