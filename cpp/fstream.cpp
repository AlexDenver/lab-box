#include <iostream>
#include <fstream>

using namespace std;

int main(){

  char text[200];

  fstream file;
  file.open ("file.txt", ios::app | ios::out);

  cout << "Write text to be written on file." << endl;
  cin.getline(text, sizeof(text));


  // file.write((char*) &text,sizeof(text));
  file << text << endl;

  file >> text;
  cout << text << endl;

  file.close();
  return 0;
}