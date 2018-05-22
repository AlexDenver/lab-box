#include<stdio.h>
struct node{
	int data;
	struct node *next,*prev;
};
typedef struct node NODE;
NODE *ROOT;
int dir=-1;
void init(){
	ROOT = (NODE*)malloc(sizeof(NODE));
}

void insert(){
	NODE *temp,*trav;
	temp = (NODE*)malloc(sizeof(NODE));
	printf("Enter Node Data;");
	scanf("%d",&temp->data);
	trav=ROOT;
	if(dir==-1){
		while(trav->left==NULL){
			 if(ROOT->LEFT==NULL)
			
		}
		
	}


}

void main(){

}