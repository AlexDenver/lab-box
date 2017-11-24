#include<stdio.h>
void main(){
	int n,i,a[100],esum=0,osum=0;
	printf("Enter Size of Array: ");
	scanf("%d",&n);
	printf("Enter %d Elements; ",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(i%2)
			esum+=a[i];			
		else
			osum+=a[i];
	}
	printf("Sum of Array Elements at Even Posistion: %d\n",esum);
	printf("Sum of Array Elements at Odd  Position: %d\n",osum);
}
