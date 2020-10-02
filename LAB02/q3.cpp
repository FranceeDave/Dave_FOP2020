#include <iostream>
#include <cmath>
using namespace std;

int main()
{

// input the variables
double radius, volume, area;
float pi = 3.14;
//input the radius
cout<< " Input the radius of sphere : " << endl;
cin>> radius;
//calculate
volume =  4/3 * pi * pow(radius, 3) ;
area = 4 * pi * pow(radius, 2);
//print results
cout<< " Sphere's volume is : " << volume << endl;
cout<< " Sphere's surface area is : " << area << endl;

return 0;
}