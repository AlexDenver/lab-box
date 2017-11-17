#include<stdio.h>
void main(){
	int flag=1,i=1,n;
	printf("Enter a Number:");
	scanf("%d",&n);
	while(++i<=(int)(n/2)){				
		if(n%i==0){
			flag=0;
			break;		
		}
	}
	if(flag)	
		printf("\n\n%d is a Prime Number\n\n",n);
	else
		printf("\n\n%d is Not a Prime Number\n\n",n);

	
}
