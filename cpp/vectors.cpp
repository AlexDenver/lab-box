#include<iostream>
#include<vector>
int main(){
	std::vector<int> c;
	std::cout<<"\nThe Max Size: "<<c.max_size()<<"\n";
	
	for (int i = 0; i < 6; ++i){
		c.insert(c.end() - i, (i + c.max_size()));
	}

	for (int i = 0; i < 6; ++i)
		std::cout<<"\n"<<c[i];
}