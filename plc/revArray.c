#include<stdio.h>
void main(){
	int i,n,a[10],sum=0;
	printf("Enter Size of Array: ");
	scanf("%d",&n);
	printf("Enter %d Elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for(i=n-1;i>=0;i--){
		printf("%d\t",a[i]);
		sum+=a[i];
	}
	printf("\nSum of All Elements; %d\n\n",sum);
}
