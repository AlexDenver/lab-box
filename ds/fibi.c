#include<stdio.h>
int fibi(int n,int t1, int t2){
	if(n>0){
		printf("%d ",t1);
		fibi(n-1,t2,(t1+t2));
	}else 
		return 0;
}
void main(){
	int n;
	printf("Enter Number of Series to be Generated:");
	scanf("%d",&n);
	printf("%d Fibinocci Numbers are;\n",n);
	fibi(n,0,1);
	printf("\n");
}
//	t3 = t1 + t2;
//	t1 = t2;
//	t2 = t3
//	t1 = 0
//	t2 = 1
//	t3 = 0 + 1
//	
//	t1 = 1 [t2]
//	t2 = 1 [t3]
