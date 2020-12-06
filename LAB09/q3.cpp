#include <iostream> 
using namespace std; 
//state function
string check(int a) 
{ 
   if (a%2==0) {
     return "even";
   }
   else {
   return "odd" ;
   }
} 
  
int main() 
{ 
    int a;
    cout << "Input the number " << endl;
    cin >> a;
    cout << "Your number is a " << check(a) << " number" << endl;
    return 0;
} 