#include<stdio.h>
int strLen(char str[100]){
	static int count=0;
	if(str[++count]=='\0')
		return count;
	else 
		strLen(str);
}
void main(){
	char str[100];
	printf("Enter a String:\n");
	scanf("%s",&str);
	printf("Length of String %s is %d\n",str,strLen(str));
}