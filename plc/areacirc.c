#include<stdio.h>
#define PI 3.1415
void main(){
	float r, area;
	printf("Enter Radius of the Circle: ");
	scanf("%f",&r);
	area = PI*r*r;
	printf("Area of Circle with Radius %.1f is %.2f\n\n",r,area);
}
