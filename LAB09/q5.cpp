#include <iostream> 
using namespace std; 
//state function
float area(float radius) 
{ 
  float A;
  A = 3.14*radius*radius;

  return A;
} 
  
int main() 
{ 
double a;
cout<< " Input the radius " ;
cin >> a;
cout<<" Area is " << area(a) << endl;
    return 0;
} 