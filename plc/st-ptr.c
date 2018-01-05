#include "stdio.h"
typedef struct {
	char first[15], last[15], middle[15], sal[5];
}name;
name format(name);
void main(){
	name a,b;
	printf("Enter Name: (First Middle Last)\n");	
	scanf("%s%s%s",a.first,a.middle,a.last);
	b = format(a);
}

name format(name in){
	int i;
	printf("\tFirst\t\tMiddle\t\tLast\n");
	for ( i = 0; i < 30; ++i){
		printf("*-");
	}
	printf("\n");
	printf("\t%s\t\t%s\t\t%s\n",in.first,in.middle,in.last);
	return in;
}