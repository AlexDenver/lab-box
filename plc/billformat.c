#include<stdio.h>
void main(){
	float rPrice,sPrice;
	printf("Enter Price of Rice: ");
	scanf("%f",&rPrice);
	printf("Enter Price of Sugar: ");
	scanf("%f",&sPrice);
	printf("\n\n*****LIST OF ITEMS*****");
	printf("\nITEM\t\tPRICE");
	printf("\nRice\t\t%.2f",rPrice);
	printf("\nSugar\t\t%.2f\n\n",rPrice);
}
