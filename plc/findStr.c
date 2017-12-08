#include<stdio.h>

void main(){
	char str[100],sub[100];
	int i,j,sLen,subLen;
	printf("Enter a String: ");	
	scanf("%[^\n]",str);
	for(sLen=0;str[sLen]!='\0';sLen++);
	printf("\nEnter Search String: ");
	scanf("%[^\n]",sub);
	for(subLen=0;sub[subLen]!='\0';subLen++);
	for(i=0;i<sLen && j<subLen;i++){
		printf("\n\nstr: '%c' subL '%c'",str[i],sub[j]);
		if(str[i]!=sub[j++])
			j=0;
	}
	if(j==subLen)
		printf("\nString '%s' Exists in \"%s\"\n",sub,str);
	printf("\nJ=%d\n\n",j);
}
