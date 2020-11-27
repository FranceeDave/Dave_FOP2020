#include <iostream>
using namespace std;
int main() {
  
  int mylist[5] = {4,7,12,5,2}; //declare the array
  
  int sum = 0; //initialize sum = 0

  for(int i=0; i<5 ; i++){ //calculate sum using for loop function
    sum = sum + mylist[i] ;
      }

   int average = sum/5; //declare formula to find average
  
  cout<< " average is " << average << endl; //output
  
  return 0;
}
