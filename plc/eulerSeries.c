#include<stdio.h>
void main(){
	float sum=1,f;
	int n,i=0,fact;
	printf("Enter last number in the Series(n):");
	scanf("%d",&n);
	while(i++<n){
		fact=i;
		f=1;
		while(fact>1)f*=fact--;
		sum+=1/f;
	}
	printf("\n\nEuler Series upto %d is %.5f\n",n,sum);
}
