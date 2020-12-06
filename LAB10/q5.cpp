#include <iostream>
using namespace std;

double newfahrenheit (double celcius);
double newcelcius (double fahrenheit);

int main ()
{
  cout << newfahrenheit (30) << endl;
  cout<< newcelcius (30) << endl;
}
double newfahrenheit (double celcius) {
  return (celcius * 9/5)+32;
}
double newcelcius (double fahrenheit) {
  return (fahrenheit - 32)*5/9;
}