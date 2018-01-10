#include "stdio.h"
void main(	
	int n[5] = {1,2,3,4,5};
	int i=0,*ptr;
	ptr = n;
	while(i<5){
		printf("%d\n", *(ptr+4-i));
		i++;
	}
}