#include<stdio.h>

void main(int argc, char *argv[]){
	FILE *f1,*f2;
	char c;
	// printf("Enter Source File\n");
	// scanf("%s",src);
	if(argc!=3)
		return;
	f1=fopen(argv[1],"r");
	if(f1!=NULL){
		// printf("Enter Destination File\n");
		// scanf("%s",dst);
		f2=fopen(argv[2],"w");		
		while((c=getc(f1))!=EOF)			
			putc(c,f2);		
		fclose(f2);
	}else{
		printf("Source File Does not Exist\n");
	}
	fclose(f1);
}