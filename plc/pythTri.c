#include<stdio.h>
#include<math.h>
void main(){
	float x,y,z;
	printf("Enter three sides of Triangle: ");
	scanf("%f%f%f",&x,&y,&z);
	if((pow(x,2)+pow(y,2)==pow(z,2)) || (pow(y,2)+pow(z,2)==pow(x,2)) || (pow(z,2)+pow(x,2)==pow(y,2)))
		printf("The Given Sides of Triangle Represent a Right Triangle.\n");
	else
		printf("The Given Sides do not Represent a Right Angled Triagle.\n");
}
