#include<stdio.h>
void main(){
	int i=0,j=0,n=3,k=0;
	while(i++<n){		//i = 1, 
		j=i-1;    	//j = 0, 
		k=0;
		while(k++<=((n-j)))
			printf("\t");
		while(j-->0)
			printf("*\t");
		printf("\n");
	}
}
