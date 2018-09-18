import java.util.*;
import Stack.MyStack;
public class stackProgram{
	public static void main(String arg[]){
		int op = 1;
		MyStack ms = new MyStack();
		Scanner in = new Scanner(System.in);
		while(op>0){
			System.out.println("1) Push \t2) Pop\t3)Display");
			System.out.print("Choice:");
			op = in.nextInt();
			switch(op){
				case 1: ms.push(10);
				break;
				case 2: System.out.println(ms.pop() + " was Removed From Stack.");
				break;
				case 3: ms.display();
			}
		}
	}
}