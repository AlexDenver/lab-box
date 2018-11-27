class myNewThread2 implements Runnable{
	int tno;
	myNewThread2(int n){
		tno = n;
	}
	public void run() {
		try{
			for(int i=0; i<5; i++){
				System.out.println("Thread "+ tno+ ": " + i);
				Thread.sleep(500);
			}
		}catch(Exception e){
			e.printStackTrace();
		}
	}
	
}

public class simpleThread {
	public static void main(String arg[]){
		Thread t1 = new Thread(new myNewThread2(1));
		Thread t2 = new Thread(new myNewThread2(2));		
		t2.setPriority(1);
		t1.setPriority(10);
		t2.start();
		t1.start();
	}
}
