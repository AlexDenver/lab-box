#include<stdio.h>
#include<string.h>
void main(){
	char str[100];
	int i,theCount;
	theCount=i=0;
	printf("Enter a String:");
	scanf("%s",str);

	while(i<strlen(str)){
		if(str[i]=='t'){
			if(str[i+1]=='h')
				if(str[i+2]=='e')
					theCount++;
		}
		i++;		
	}

	printf(" %s\n has %d 'the' in it.",str,theCount);
}