#include<iostream> 

using namespace std; 

int main() { 
  //state the variable
  int i;
  int j;
  int k;
  cout<< "enter desired number : " << endl;
  cin>>k;
    for (int i = 1; i <= k; i++) { 
       for (int j = 1; j <= k; j++) {
           // output
            cout<< i * j << " " ;
        } 
       //new line
        cout << endl;
    } 
    return 0; 
} 