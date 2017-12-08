#include<stdio.h>
void change(int[], int);
void main(){
	int arr[10],n,i;
	printf("Enter Size of Array: ");
	scanf("%d",&n);
	printf("Enter %d Elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	change(arr,n);
	printf("\n\n\t\tArray after Calling Sub-Function\n\n");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n\n");
}

void change(int ar[],int n){
	int i;
	for(i=0;i<n;i++)
		ar[i] *= 2;
}
