#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX],f=-1,r=-1,e;
int isFull(){
	return (r>(MAX-1));
}
int isEmpty(){
	return (f==-1);
}
int overflow(){
//	return r>f;
//	printf("\nex%d>f%d\n",((r+1)%MAX),f);
	return ((r+1)%MAX)<f;
}
int underflow(){
//	return f>r;
	return (f%MAX)>r;
}
void enterQueue(){
//	if(isFull()){
//		printf("Queue is Full");
//		return;
//	}
	if(overflow()){
		printf("Queue Overflow, Delete Few Elements.");
		return;
	}
	if(isEmpty()){
	printf("Here");
	f++;
	}
	printf("Enter an Element:");
	scanf("%d",&e);
	r=(r+1)%MAX;
	queue[r]=e;

}
int exitQueue(){
	if(isEmpty()){
		printf("No Elements in Queue");
		return -1;
	}
	if(underflow()){
		printf("Queue Underflow, Enter Elements into Queue.");
		return -1;
	}
	e=queue[f];
	f=(f+1)%MAX;
	return e;
}
void display(){
	int i;
	if(isEmpty()){
		printf("No Queue Elements to Show");
		return;
	}
	for(i=f;i<=r;i++)
		printf("%d->%d\t",i,queue[i]);
		
}
void main(){
    int ch;
    while (1){
	printf("\nf%d - r%d\n",f,r);
	printf("\n1 - Enqueue");
	printf("\t2 - Dequeue");
	printf("\n3 - Display");
	printf("\t4 - Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch (ch){
        case 1:
            enterQueue();
            break;
        case 2:
            printf("%d was processed from queue",exitQueue());
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong choice");
        }
    }
}
