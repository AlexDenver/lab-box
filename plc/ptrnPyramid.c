#include<stdio.h>
void main(){
	int n,i=0,j,k;
	printf("Enter Number of Lines: ");
	scanf("%d",&n);
	while(i<n){
		j=i++;
		k=0;
		while(k++<(n-i)/2)
			printf("\t");
		while(j-->=0)
			printf("*\t");
		printf("\n");
			
	}
}

