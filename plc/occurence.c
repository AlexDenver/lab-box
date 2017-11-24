#include<stdio.h>
void main(){
	int i,c=0,j,n,a[10],temp;
	printf("Enter size of Array: ");
	scanf("%d",&n);
	printf("Enter %d Elements: ",n);
	for(i=0;i<n;i++) 
		scanf("%d",&a[i]);
	
	for(i=0;i<n;i++){
		if(a[i]!=-31001){
			temp = a[i];
			c=1;
			for(j=i+1;j<n;j++)
				if(a[i]==a[j] && a[j]!=-31001){
					c++;
					a[j]=-31001;
				}
			printf("\n%d was found %d times.\n",temp,c);
		}
	}
}
