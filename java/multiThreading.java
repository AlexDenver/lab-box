class myThread extends Thread{
	int n;
	myThread(int x){
		n = x;
	}
	public void run(){
		try{
		for(int i=n;i<n+10;i++){
			System.out.println(i);
			Thread.sleep(500);
		}
		}catch(Exception e){
			e.printStackTrace();
		}
	}
}
public class multiThreading {
	public static void main(String args[]){
		myThread mt1 = new myThread(10);
		mt1.setPriority(10);
		myThread mt2 = new myThread(20);
		mt2.setPriority(1);
		mt1.start();
		mt2.start();
		
	}
}
