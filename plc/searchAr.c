#include<stdio.h>
void main(){
	int i,se,n,a[25];
	printf("Enter Size of Array: ");
	scanf("%d",&n);
	printf("Enter %d Elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nEnter Search Element: ");
	scanf("%d",&se);
	for(i=0;i<n;i++)
		if(a[i]==se)
			break;
	if(i==n)
		printf("%d was Not found in Given Array.\n",se);
	else
		printf("%d was found at position %d\n\n",se,i);
}
