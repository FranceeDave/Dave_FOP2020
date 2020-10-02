#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float fahrenheit, celcius ;

  
  cout<< "temperature in celcius : " << endl;
  cin>> celcius;

  fahrenheit = (celcius * 9.0) / 5.0 + 32;
  
  cout<< " temperature in fahrenheit : " << fahrenheit << endl;

  return 0;

}