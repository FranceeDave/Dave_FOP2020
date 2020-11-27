#include <iostream>
using namespace std;

int add (int num){
  int number;
  int sum = 0;

  while ( num > 0){
    number = num%10;
    sum += number;
    num = num/10;
  }
  return sum;
}

int main (){
  int number;
  cout<< " enter any number " << endl;
  cin>>number;
  cout<<add(number);
}