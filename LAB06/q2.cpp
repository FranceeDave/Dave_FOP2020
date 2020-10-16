#include<iostream> 

using namespace std; 

int main() { 
  int i;
  int j;
  int k;
  cout<< "enter desired number : " << endl;
  cin>>k;
    for (int i = 1; i <= k; i++) { 
       for (int j = 1; j <= k; j++) {
            cout<< i * j << " " ;
        } 
        cout << endl;
    } 
    return 0; 
} 