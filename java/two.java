import java.util.*;
interface numTest{
	//int n;
	boolean isNegative(int x);
	boolean isZero(int x);
}


class myTester implements numTest{
	public boolean isNegative(int n){
		return n<0;
	}
	public boolean isZero(int n){
		return n==0;
	}
}

class two{
	public static void main(String arg[]){
		// 22System.out.print( "[ " + arg + " ] \n");
		int n;
		myTester mt = new myTester();
		Scanner in = new Scanner(System.in);
		n = in.nextInt();
		if(mt.isNegative(n)){
			System.out.print(n + " is Negative");
		}else if(mt.isZero(n)){
			System.out.print("You Entered Zero!.");
		}else{
			System.out.print( n + " is Positive");
		}
	}
}