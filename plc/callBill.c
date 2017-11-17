#include<stdio.h>
void main(){
	float amt;
	int calls;
	printf("Enter No of Calls Made: ");
	scanf("%d",&calls);
	amt = 250 + (calls>100?(calls-100)*1.25:0);
	printf("\n\n******USAGE BILL******");
	printf("\nTotal Calls\t%d",calls);
	printf("\nBill Amount\t%.2f\n\n",amt);
}
