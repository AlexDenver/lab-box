#include<stdio.h>
#include<math.h>
void main(){
	int i,n;
	float sum=1;
	printf("Enter index value of Series: ");
	scanf("%d",&n);
	while(i++<=n)
	sum+=i/(pow(i,i+1));
	printf("\nSum of the Series upto %d is %.2f\n\n",n,sum);
}
