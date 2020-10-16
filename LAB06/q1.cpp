#include<iostream>
using namespace std;

int main() {
  // for loop condition
for (i=0;i<100;i+=3) {
  if (i%5==0){
    continue;
  }
//output
  cout<<i<<endl;
}
return 0;
}