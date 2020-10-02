#include <iostream>

using namespace std;

int main()
{
  double length, width, Area, Perimeter;

  cout << " Input rectangle's length : " << endl;
  cin>> length;

  cout << " Input rectangle's width : " << endl;
  cin>> width;

  Area = length * width;
  Perimeter = 2*(length + width);

  cout << " Your rectangle's area is : " << Area << endl;
  cout << " Your rectangle's perimeter is : " << Perimeter << endl;

  return 0;

}
