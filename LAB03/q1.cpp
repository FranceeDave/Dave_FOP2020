#include<iostream>
using namespace std;
 
int main()
{
    //state the variable
    int number, remainder;

    //input the number
    cout << "Enter the number : ";
    cin >> number;
    
    // determine wether it's odd or even 
  
    remainder = number % 2;
<<<<<<< HEAD
    if (remainder == 0){
        cout << number << " is even " << endl;
    }
    else {
        cout << number << " is odd " << endl;}
=======
    if (remainder == 0)
        cout << number << " is even " << endl;
    else
        cout << number << " is odd " << endl;
>>>>>>> 6939910653b5c1d87330c1047fb6651cf4089f28
 
    return 0;
}