#include <iostream>
using namespace std;

int main()
{

// age1= current age, age2=next year's age, age 3=last year's age
int age1 , age2, age3;
// input your age
cout<< "Input your age this year : " << endl;
cin>> age1;
//formula to find last and next year's age
age2= age1 + 1;
age3= age1 - 1;
//calculate and print
cout<< " Your age next year : " << age2 << endl;
cout<< " Your age last year : " << age3 << endl;

return 0;
}