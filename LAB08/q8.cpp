#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  string myname;
  string fullname;
  string myage = " My age is 18 Y.O " ;
  
  //read file
  ifstream input;
  input.open("myname.txt");

  // Read data
  // input >> myname;
  while(getline(input,myname)){
  fullname = fullname + myname ;
  }

  // Close file
  input.close();

ofstream output;

output.open("myname.txt");

output << fullname << endl << myage;

output.close();

cout << "Done";
}