#include<iostream>
using namespace std;
class toll{
	private:
		int carCount, amtCollected;
	public:
		toll(){
			carCount=0;
			amtCollected=0;
		};
		void payToll(){
			incrCar();
			amtCollected+=50;
		}
		void incrCar(){
			carCount++;
		}
		void stats(){
			cout<<"\nTotal Cars  :\t"<<carCount<<endl;
			cout<<"Total Amount:\t"<<amtCollected<<endl;
			cout<<"Free Passers:\t"<<(carCount-(amtCollected/50));
		}
		
};

int main(){
	toll t;
	int op;
	do{
		cout<<"\n\n1) Register Toll\n2) Skip Toll\n3) Display Stats\nPress Any Other Number to Exit.\n";
		cout<<"Enter Choice:";
		cin>>op;
		switch(op){
			case 1: t.payToll();
				break;
			case 2: t.incrCar();
				break;
			case 3: t.stats();
				break;
			default: cout<<"Thank You For Using TMS";
		}
	}while(op<4);
	return 0;
}