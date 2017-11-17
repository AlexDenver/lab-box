#include<stdio.h>
void main(){
	int m,p,c; //Marks in math,physics and chem
	int test1, test2;
	printf("Enter Marks in Maths: ");
	scanf("%d",&m);
	printf("Enter Marks in Physics: ");
	scanf("%d",&p);
	printf("Enter Marks in Chemestery: ");
	scanf("%d",&c);
	test1 = ((m>=60 && p>=50 && c>=40) && (m+p+c)>=200);
	test2 = ((m+p)>150 && (c>35));
	if(test1 || test2)	
	printf("\n\nCongratulations You are Eligible to the Course.\n\n");
	else
	printf("\n\nSorry, You are not Eligible.\n\n");
}
