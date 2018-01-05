#include "stdio.h"
void main(){
	int n[5] = {1,2,3,4,5};
	int i=0,*ptr,sum=0;
	ptr = n;
	while(i<5){
		sum =sum + *(ptr+i);
		i++;
	}
	printf("Sum is %d\n", sum);
}



*(*(x1+1)+j)