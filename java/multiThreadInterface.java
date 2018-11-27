class myNewThread implements Runnable{
	Thread t;
	public void run(){
		try{
			for(int m = 0; m < 5 ; m++){
				System.out.println("Child Thread: " + m);
				Thread.sleep(1000);
				//t.join();
			}
		}catch(Exception e){
			e.printStackTrace();
		}
		System.out.println("Exiting Child Thread");
	}
}
public class multiThreadInterface {
	public static void main(String ar[]){
		Thread mt = new Thread(new myNewThread());
		try{
			
			mt.start();
			mt.join();
			for (int i = 0; i < 5; i++) {
				System.out.println("Main Thread: " + i);			
				Thread.sleep(500);
			}
		}catch(Exception e){
			e.printStackTrace();
		}
		try{			  
			
		}catch(Exception e){
			e.printStackTrace();
		}
		System.out.println("Main Thread Exiting");
	}
}