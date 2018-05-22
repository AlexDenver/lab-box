#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next,*prev;
};
typedef struct node NODEX;
NODEX *HEAD ;
void init(){		
	HEAD = (NODEX*)malloc(sizeof(NODEX));
}
void insert(int x){
	NODEX *temp,*trav;
	int tpos=0;
 	temp = (NODEX*) malloc(sizeof(NODEX));
	if(x==-1){
	 	printf("\nEnter Node Data:");
	 	scanf("%d",&temp->data);
	 	if(HEAD->next==NULL){
	 		HEAD->next=temp;
	 		temp->prev=HEAD; 		
	 	}else{
	 		trav=HEAD;
	 		while(trav->next!=NULL){
	 			trav=trav->next;
	 		} 		
	 		trav->next=temp;
	 		temp->prev=trav;
	 	}
	}else{		
 		trav=HEAD;
		while(tpos!=x || trav->next!=NULL){		
			trav=trav->next;
			tpos++;
		}
		if(trav->next == NULL){
			printf("\nError, Position Out of Bound.\n");
			return;
		}
		printf("\nEnter Node Data:");
	 	scanf("%d",&temp->data);
		(trav->prev)->next = temp;
		temp->next = trav->next;	
	}
 	
}

void display(int op){
	NODEX *trav;
	if(op==0){
		trav=HEAD;
		printf("HEAD>>");
		do{
			trav=trav->next;
			printf("%d>>", trav->data);
		}while(trav->next!=NULL);
		printf("NULL\n");
	}else{
		trav = HEAD;
		while((trav->next)!=NULL){
			trav=trav->next;
		}
		printf("NULL>>%d>>", trav->data);
		while(trav->prev!=HEAD){
			trav=trav->prev;
			printf("%d>>", trav->data);
		}
		printf("HEAD\n");
	}
}

int search(int x){
	NODEX *trav;
	int pos = 0,flag=0;
	trav=HEAD;
	do{
		trav=trav->next;
		if(trav->data == x){
			flag=1;
			break;
		}
		pos++;
	}while(trav->next != NULL);
	if(flag)
		return pos;
	else
		return -1;
}

void main(){
	int ch,n;
	init();
	do{
		printf("\n\n1) Insert\t\t2) Display Inorder\n3) Display Reversed\t4) Search\n5) Insert at Pos\t6) Exit\n");
		printf("Enter Choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1: insert(-1);
				break;
			case 2: display(0);
				break;
			case 3: display(-1);
				break;
			case 4: 
				printf("\nEnter Element to Search:");
				scanf("%d",&n);
				printf("%d was ",n);
				n=search(n);
				if(n!=-1){
					printf(" found at position %d\n", n);
				}else{
					printf(" not found");

				}
				break;
			case 5: 
				printf("\nEnter Position to Insert at:");
				scanf("%d",&n);
				insert(n);
				break;
		}

	}while(ch<6);
}