#include<iostream>
using namespace std;
class mytime{
	private:
		int hrs,min,sec;
	public:
		mytime(){
			hrs=min=sec=0;
		}
		// mytime(): hrs(100), min(100),sec(100){}
		mytime(int h,int m,int s){
			hrs=h;
			min=m;
			sec=s;			
			// addTime(mytime(), this);
		}	
		void addTime(mytime t1, mytime t2){
			sec = t1.sec + t2.sec;
			while(sec>=60){
				min++;
				sec=sec-60;
			}
			min += t1.min + t2.min;
			while(min>=60){
				hrs++;
				min=min-60;
			}
			hrs += t1.hrs + t2.hrs;
		}
		void showTime();
};
void mytime::showTime(){
	cout<<"The Time is: "<<hrs<<":"<<min<<":"<<sec<<"\n";
}
int main(){
	mytime t1(24,48,52), t2(12,30,28),t3;
	t1.showTime();
	t2.showTime();
	cout<<"Time t3 Before Adding"<<endl;
	t3.showTime();
	t3.addTime(t1,t2);
	cout<<"Time t3 After Adding"<<endl;
	t3.showTime();
}
