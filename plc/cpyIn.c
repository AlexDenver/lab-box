#include<stdio.h>
void main(int argc, char *argv[]){
	FILE *f1,*f2;
	char c;
	if(argc!=2)return;
	 

	f1=fopen(argv[1],'r');
	while(c!=EOF){		
		printf("%c",c);
		c=getc(f1);
	}

	printf("\n");
	if(f1!=NULL){
		printf("Student\n");
		f2=fopen(argv[2],'w');		
		f2=f1;
		fclose(f2);
	}

}