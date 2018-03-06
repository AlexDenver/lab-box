#include<stdio.h>
int num(int n){
	static int count=0;
	if(n==0)
		return count;	
	count++;
	num(n/10);

}
void main(){
	int no;
	printf("Enter a Number:\n");
	scanf("%d",&no);
	printf("No of Digits in %d is %d\n",no,num(no));
}