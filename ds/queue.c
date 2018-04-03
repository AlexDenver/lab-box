#include<stdio.h>
#define MAX 5
int queue[MAX],front=-1,rear=-1;
// void reset(){
// 	if((front+rear)==MAX*2){
// 		front = (front+1)%MAX;
// 		rear = (rear+1)%MAX;		
// 	}
// }
void enter(int x){
	//reset();
	// if((rear+1)%MAX == front){
	if((rear-front)>=MAX){
		printf("Queue Full!");
	}else{
		// rear = (rear+1)%MAX;
		queue[++rear]=x;
	}
}
int exit(){
	//reset();
	if(front==rear){
		printf("Queue Empty!");
		return -1;
	}
	else{
		// front = (front+1)%MAX;
		return queue[++front];
	}
}
void display(){
	int i;
	for(i=front;i<rear;i++)
		printf("%d->%d\t",queue[i+1],(i+1)%MAX);
}
void main(){
	int op,t;
	do{
		printf("\n\n1) Enter Queue\t2) Exit Queue\n3) Display Queue\t4) Exit\n");
		printf("Enter your Choice: ");
		scanf("%d",&op);
		switch(op){
			case 1: printf("\nEnter Element to be Added to Queue:");
				scanf("%d",&t);
				enter(t);
				break;
			case 2: 
				t=exit();
				if(t!=-1)
					printf("\n%d was Processed From the Queue",t);
				break;
			case 3: printf("\nElements in Queue Are.");
				display();
				break;
			case 4: printf("Exiting...");
				break;
		}
	}while(op<4);
}	
