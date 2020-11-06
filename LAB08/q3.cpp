#include <iostream>
#include <cmath>
using namespace std;
int main() {

double x, y;
for (x=1;x<5;x++) {
y = 2*pow(x,2)-x+7;
cout<<" the answer is = " << y << endl;
}

double a, b, c, d;
double upA, upB, upC, upD, downA, downB, downC, downD ;

a = 5.89;
upA = ceil(a);
downA = floor(a);

cout<<" a rounded up is = " << upA << endl;
cout<<" a rounded down is = " << downA<<endl;

b = 7.2;
upB = ceil(b);
downB = floor (b);

cout<<" b rounded up is = " << upB << endl;
cout<<" b rounded down is = " << downB<<endl;

c = 12.05;
upC = ceil(c);
downC = floor (c);

cout<<" c rounded up is = " << upC << endl;
cout<<" c rounded down is = " << downC<<endl;

d= 0.03;
upD = ceil (d);
downD = floor (d);


cout<<" d rounded up is = " << upD << endl;
cout<<" d rounded down is = " << downD<<endl;

return 0;
}