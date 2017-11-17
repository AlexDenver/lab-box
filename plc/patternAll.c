#include<stdio.h>
void main(){
	int i=0,j=0,n,c=0;
	n=5;
	while(i++<=n){
		j=i;
		while(j-->0)
			printf("%d\t",i);
			//Change i to [c++ for sequential, * for static]
		printf("\n");
	}
}
