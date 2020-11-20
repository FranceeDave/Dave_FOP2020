#include <iostream>
using namespace std;

//proto
int min(int a, int b);

int main (){
  cout<<"the smaller number is "<<min(1,2)<<endl;
}

int min (int a, int b)
{
  if (a<b){
    return a;
  }
  else{
    return b;
  }
}