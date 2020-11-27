#include <iostream>
using namespace std;
int main() {
  
  int mylist[5] = {4,7,12,5,2}; //declare the array
  
  int sum = 0; // initialize the sum value

  for(int i=0; i<5 ; i++){ //calculate the sum using for loop function
    sum = sum + mylist[i] ;
      }
  
  cout<< sum <<endl;//output

  return 0;
}
