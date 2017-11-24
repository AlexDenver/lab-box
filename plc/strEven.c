#include<stdio.h>
void main(){
	char str[100];
	int i;		
	printf("Enter a String:");
	scanf("%[^\n]",str);
	printf("Even position character from String are\n");
	for(i=0;str[i]!='\0';i++)
		if(i%2==0)
			printf("%c\t",str[i]);
	printf("\n");
}
