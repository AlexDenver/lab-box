#include<stdio.h>
void main(){
	int days;
	printf("Enter Days:\n");
	scanf("%d",&days);

	printf("%d days has %d years %d weeks and %d odd days",days,(int)(days/365),(int)((days-(days>365?365:0))/7),(int)((days-(days>365?365:0))%7));
}