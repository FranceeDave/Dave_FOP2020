#include <iostream>
#include <cmath>
using namespace std;

// state function
int sumnum (int num1, int num2) {
  int result;

  result = num1 + num2;
  return result ;
}
int subnum (int num1, int num2) {
  int result;

  result = num1 - num2;
  return result ;
}
int mulnum (int num1, int num2) {
  int result;

  result = num1 * num2;
  return result ;
}
int dinum (int num1, int num2) {
  int result;

  result = num1/num2;
  return result ;
}
int main(){

cout << sumnum(2,4)<<endl;
cout << dinum(4,2) << endl;
cout << subnum(4,2) <<endl;
cout << mulnum(4,2) << endl;
  

  return 0;
} 