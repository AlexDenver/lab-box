#include "stdio.h"
typedef struct {
	int a;
	tree *left,*right,*head;
}tree;

tree left(tree);
void main(){
	tree a;
	int opt;	
	do{
		printf("\n\n1) Insert Branch\t2) Enter Branch Left\n3) Enter Branch Right\t4) Set Value\n5) Move Up\t6) Exit");
		printf("\nEnter Your Choice:", );
		scanf("%d",&opt);
		switch(opt){
			case 1: insert();
					break;
			case 2: mv_left();
					break;
			case 3: mv_right();
					break;
			case 4: setVal();
					break;
			case 5: mv_up();
					break;
			case 6:
					break;
			default: printf("Invalid Choice\n");
		}
	}while(opt<6);	
}

