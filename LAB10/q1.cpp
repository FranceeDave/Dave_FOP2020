#include <iostream>
using namespace std;

//proto
int max(int a, int b);

int main (){
  cout<<"the bigger number is "<<max(1,2)<<endl;
}

int max (int a, int b)
{
  if (a>b){
    return a;
  }
  else{
    return b;
  }
}