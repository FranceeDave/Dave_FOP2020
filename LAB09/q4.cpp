#include <iostream> 
using namespace std; 
//state function
void greetings(string name) 
{ 
  cout<< " Hi " << name << " , Nice to meet you " << endl;
} 
  
int main() 
{ 
string a;
cout<< " Hi, Whats your name ? " ;
cin >> a;
greetings(a);
    return 0;
} 