#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double pi;
  double x = 37;
  pi = M_PI;
  double jawaban1;
  jawaban1 = sin (x * (pi / 180));
  cout << jawaban1 << endl;

  double y = 53;
  double jawaban2;
  jawaban2 = cos (y * (pi/180));
  cout << jawaban2 << endl;

  double z = 60;
  double jawaban3;
  jawaban3 = tan (z * (pi/180));
  cout << jawaban3 << endl;

return 0;
}