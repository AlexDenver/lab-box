#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX],f=-1,r=-1,e;
int overflow(){
	return ((r+1)%MAX)==f;
}
int underflow(){
	return f==-1;
}
void enterQueue(){
	if(overflow()){
		printf("Queue Overflow, Delete Few Elements.");
		return;
	}
	if(f==-1)
		f=0;
	printf("Enter an Element:");
	scanf("%d",&e);
	r=(r+1)%MAX;
	queue[r]=e;

}
int exitQueue(){	
	if(underflow()){
		printf("Queue Underflow, Enter Elements into Queue.");
		return -1;
	}
	e=queue[f];
	f=(f+1)%MAX;
	if((r+1)%MAX==f){
		f=-1;
		r=-1;
	}
	return e;
}
void display(){
	int i;
	if(underflow()){
		printf("No Queue Elements to Show");
		return;
	}
	for(i=f;i!=(r);i=(i+1)%MAX)
		printf("%d->%d\t",i,queue[i]);
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
            printf("\n%d was processed from queue",exitQueue());
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



// #include<stdio.h>
// #define max 3

// int front=0,rear=-1;
// int cq[max],count=0;

// void cqinsert()
// {
// int ele;

// if(count==max)
// {
// printf(“cq is full\n”);
// return;
// }
// printf(“enter the element\n”);
// scanf(“%d”,&ele);
// rear=(rear+1)%max;
// cq[rear]=ele;
// count++;
// }
// void cqdelete()
// {
// if(count==0)
// {
// printf(“cq is empty\n”);
// return;
// }
// printf(“element deleted is %d”,cq[front]);
// front =(front+1)%max;
// count–;
// }
// void cqdisplay()
// {
// int j=front,i;
// if(count==0)
// {
// printf(“cq is empty\n”);
// return;
// }
// for(i=1;i<=count;i++)
// {
// printf("%d\t",cq[j]);
// j=(j+1)%max;
// }
// }
// void main()
// {
// int ch;
// clrscr();
// printf("1:insert 2:delete 3:display default :exit\n");
// do

// {
// printf("enter choice\n");
// scanf("%d",&ch);
// switch(ch)
// {
// case 1: cqinsert();
// break;
// case 2: cqdelete();
// break;
// case 3: cqdisplay();
// break;
// case 4: exit(0);
// }
// }while(ch<=4) ;
// getch();
// }