#include<stdio.h>
void main(){
	int i,j,n,k,l=1;
	printf("Enter no of Lines to print:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=0;j<n-i;j++)
			printf(" ");
		for(k=1;k<=i;k++)
			printf("%d ",l++);
		printf("\n");
	}
}
