#include<iostream>
using namespace std;

int main() {
// for loop condition 1
for (int row = 1;row <=5;row++ ){
  for (int col = 1; col<=row;col++) {
cout << "*";
}
cout<<endl;
}
//for loop condition 2
for ( int row = 5; row >0; row--){
  for( int col = 0; col < row ; col ++){
cout << "*" ;
  }
  cout << endl;
}
return 0;
}