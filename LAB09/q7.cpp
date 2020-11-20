#include <iostream> 
#include <string> 
using namespace std; 
  
// Function which return string . 
int ceil(double inNum) 
{ 
  int returnNum;
returnNum = inNum;
returnNum += 1;

  return returnNum;
} 
int floor(double inNum) 
{ 
  int returnNum;
  returnNum =inNum;

  return returnNum;
} 

double squareRoot(double n){
  double x = n;
  double y = 1;

  while (x>y) {
    x = (x+y) / 2;
    y = n / x;
  }
  return x;
}
int pow (int inNum, int powNum){
  int result = inNum;
  for (int i = 1; i < powNum; i++){
    result *= inNum;
  }
return result;
}

// Driver code 
int main() 
{ 
double num = 11.3;
double num2 = 20;
cout<< ceil(num) << endl;
cout << floor(num) << endl;
cout << squareRoot(num2) << endl;
cout << pow(15,3) << endl;

} 