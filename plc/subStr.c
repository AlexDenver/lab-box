#include<stdio.h>
#include<string.h>
void main(){
	int i,j,sPoint,charCount,len;
	char str[100];
	printf("Enter a String");
	gets(str);
	printf("Enter Start Position for Substring: ");
	scanf("%d",&sPoint);
	printf("Enter no of characters to be Extracted after %d: ",sPoint);
	scanf("%d",&charCount);
	for(len=0;str[len]!='\0';len++);
	if((sPoint+charCount)<len){
		printf("\nRequired Substring is: ");
		for(i=sPoint;i<(charCount+sPoint);i++){
			printf("%c",str[i]);
		}
	}else{
		printf("\nWarning Given Substring Parameters Overflows.");
	}
	printf("\n\n");
}
