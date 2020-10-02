#include <iostream>
using namespace std;

int main()
{
    //name variable
    int a = 7, b = 4, temp;

    //swap variables
    
    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping" << endl;
    cout << " a = " << a << endl;
    cout << " b = " << b << endl;

    return 0;
}