
public class MainThread {
	public	static void main(String arg[]){
		Thread t = Thread.currentThread();
		
		System.out.println("Current Thread is: "  +t);
		
		
		t.setName("My Thread");
		System.out.println("After Name Change: "  +t);
		
		try{
			for(int m = 0; m < 5 ; m++){
				System.out.println(m);
				Thread.sleep(1000);
			}
		}catch(Exception e){
			e.printStackTrace();
		}
	}
}
