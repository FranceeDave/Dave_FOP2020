#include <iostream>
#include <fstream>
using namespace std;

<<<<<<< HEAD
int main() {
  // Variable
  string myname;
  string fullname;
  string myage = "My age is 20 years old.";

  // Read File
  ifstream input; // Variable untuk Read File
  input.open("myname.txt");

  getline(input, myname, '\n');
  cout << myname;
  fullname = myname;

  input.close();

  // Write File
  ofstream output; // Variable untuk Write File
  output.open("myname.txt");

  output << fullname << endl << myage;

  output.close();

  cout << "DONE";
=======
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
>>>>>>> c84d106b21381b7011d46d165a1bc7c43cc9a1e1
}