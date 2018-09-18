import java.util.*;
class plane{
	int height, width;	
}
class Box{
	int height=10, width, depth;
	Box(int h, int w, int d){
		
		this.height = h;
		this.width = w;
		this.depth = d;
	}
	Box(){
		height = 10;
		width = 20;
		depth = 30;
	}
	int volume(){
		int v;
		v = height*depth*width;
		return v;
	}
	int volume(int h, int d, int w){
		return h*d*w;
	}
	void product(int a, int b){
		System.out.println("The Prod is: " + a*b);
	}
}

class one{
	public static void main(String arg[]){
		Box b1 = new Box(10,20,40);
		Box b2 = new Box();
		int v = b1.volume();
		b1.height = 100;
		System.out.println("The Volume is: " + v);	
		int v = b1.volume(90,20,42);
		System.out.println("The Volume is: " + v);	
		//	Scanner in = new Scanner(System.in);
		//	int a = in.nextInt();
		b1.product(a,50);
		//finalize()
	}
}