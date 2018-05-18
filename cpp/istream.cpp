#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main(){

  char *text= new char[100];
  char txt[100];
  ifstream file("file.txt");
  // file.read(text,200);
  while(file.getline((char*) &txt,sizeof(txt))){  	
  	cout<<txt<<endl;
  }
  // cout<<text;
  return 0;
}