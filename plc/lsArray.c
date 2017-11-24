#include<stdio.h>
void main(){
	int n,i,smi,lgi;
	int a[100];
	printf("Enter size of Array: ");
	scanf("%d",&n);
	printf("Enter %d Elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);	
	lgi=smi=0;
	for(i=1;i<n;i++){
		if(a[i]>a[lgi])
			lgi=i;
		if(a[i]<a[smi])
			smi=i;
	}
	printf("\nLargest Element in the Given Array is %d at %d Position",a[lgi],lgi);
	printf("\nSmallest Element in the Given Array is %d at %d Position\n",a[smi],smi);
}
