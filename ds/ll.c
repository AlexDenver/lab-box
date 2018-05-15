#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node NODE;
void main(){
	NODE *HEAD,*temp,*p;
	int n;
	HEAD=(NODE*)malloc(sizeof(NODE));
	int i;
	for(i=1;i<6;i++){
		temp=(NODE*)malloc(sizeof(NODE));
		printf("\nEnter Ele:");
		scanf("%d",&n);
		temp->data = n;
		if(i==1)
			HEAD->next = temp;
		else
			p->next=temp;
		p=temp;
	}
	temp=HEAD;
	printf("\n");
	if(HEAD->next!=NULL){
		do{
			temp=(temp->next);
			printf("%d=>",temp->data);
		}while(temp->next!=NULL);
		printf("NULL\n");
	}else
		printf("No Elements to Show\n");
}
