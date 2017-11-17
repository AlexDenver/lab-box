#include<stdio.h>
#include<math.h>
void main(){
	float s, a, b, c;
	double area;
	printf("Enter Side A of Triangle:");
	scanf("%f",&a);
	printf("Enter Side B of Triangle:");
	scanf("%f",&b);
	printf("Enter Side C of Triangle:");
	scanf("%f",&c);
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\n\nArea of Triangle with Sides %.1f, %.1f & %.1f is %.2f\n\n",a,b,c,area);
}

