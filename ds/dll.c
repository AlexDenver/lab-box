#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next,*prev;
};
typedef struct node NODE;
void main(){
	NODE *HEAD,*temp,*p;
	int n;
	HEAD=(NODE*)malloc(sizeof(NODE));
	int i;
	do{
		temp=(NODE*)malloc(sizeof(NODE));
		printf("\nEnter Ele:(-1 to Exit):");
		scanf("%d",&n);
		if(n==-1)break;
		temp->data = n;
		if(HEAD->next==NULL){
			HEAD->next = temp;
			temp->prev = HEAD;
		}else{
			p->next=temp;
			temp->prev = p;
		}
		p=temp;
	}while(1);
	temp=HEAD;
	printf("\n");
	if(HEAD->next!=NULL){
		do{
			temp=(temp->next);
			printf("%d=>",temp->data);
		}while(temp->next!=NULL);
		printf("NULL\n");
		printf("\n\n");
		printf("Rev\n");
		printf("%d=>",temp->data);
		do{
			temp=(temp->prev);
			printf("%d=>",temp->data);
		}while(temp->prev!=HEAD);
		printf("HEAD\n");


	}else
		printf("No Elements to Show\n");
}
