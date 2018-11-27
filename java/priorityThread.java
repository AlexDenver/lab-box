class myPriorityThread extends Thread{
	int n;
	myPriorityThread(int x){
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

public class priorityThread {
	public static void main(String arg[]){
		myPriorityThread mt1 = new myPriorityThread(10);
		myPriorityThread mt2 = new myPriorityThread(10);
		mt1.start();
		mt2.start();
		
	}
}





 
