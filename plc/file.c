#include<stdio.h>
void main(){
	char c=' ';
	FILE *f1;
	f1=fopen("names","r");
	while(c!=EOF){		
		printf("%c",c);
		c=getc(f1);
	}
	printf("\n");
	fclose(f1);
}



