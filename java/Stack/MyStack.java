package Stack;
interface stack{
	void push(int x);
	int pop();
	void display();
}
public class MyStack implements stack{	
 	int SIZE = 10;
	int top = -1;
	int[]  st = new int[SIZE];
	public void push(int x){
		if(top < SIZE - 1){
			top++;
			st[top] = x;
		}else
			System.out.println("Stack Overflow");
	}
	public void display(){
		if (top == -1){
			System.out.println("No Elements in Stack.");
			return;
		}
		System.out.println("Stack Elements.");
		for(int j=0; j <= top ; j++)
			System.out.print(st[j] +"\t");
		System.out.println();
	}
	public int pop(){
		if(top==-1){
			System.out.println("Stack Underflow");
			return -1;
		}else
			return st[top--];		
	}
}