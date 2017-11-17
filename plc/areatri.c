#include<stdio.h>
void main(){
	float h,b,area;
	printf("Enter Height of the Triangle: ");
	scanf("%f",&h);
	printf("Enter Base of the Triangle: ");
	scanf("%f",&b);
	area = 0.5*b*h;
	printf("\n\nArea of Triangle with Height %.1f and Base %.1f is %.2f\n\n",h,b,area);
}
