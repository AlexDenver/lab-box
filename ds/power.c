#include<stdio.h>
long int mpow(int b,int e){
	if(e==0)
		return 1;
	else
		return b*mpow(b,e-1);
}
void main(){
	int b,e;
	printf("Enter a Base and Exponent:");
	scanf("%d%d",&b,&e);

	printf("%d to the power of %d is %ld\n",b,e,mpow(b,e));

}