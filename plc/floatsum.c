#include<stdio.h>
void main(){
	float num1, num2, sum;
	printf("Enter First Number: ");
	scanf("%f",&num1);
	printf("Enter Second Number: ");
	scanf("%f",&num2);
	sum = num1 + num2;
	printf("\n\nSum of %.1f and %.1f is %.2f\n\n", num1, num2, sum);
}
