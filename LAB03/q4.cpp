#include<iostream>
using namespace std;
 
int main() {
//state the variables
float number1, number2;
char y;
//input the numbers
cout<< "Enter your first number : " << endl;
cin>>number1;

cout << " Enter your second number : " << endl;
cin>>number2;
// choose the operations
cout<<"Select the given operation : + , -, * , /" << endl;
cin >> y;


//do the operation
switch (y) {
  case '+': 
        cout <<  " Answer = " << number1 + number2 << endl;
        break; 
  case '-': 
        cout << " Answer = " << number1 - number2 << endl;
        break;
  case '*': 
        cout << " Answer = " << number1 * number2 << endl;
        break;
  case '/':
        if (number2 == 0) {
          cout << " Answer = " << "undefine" << endl;
        }     
        else { 
          cout << " Answer = " << number1 / number2<< endl;
        }  
        break;

        default :
          cout << " Answer =  Error " << endl;
          break;
}
return 0;
}