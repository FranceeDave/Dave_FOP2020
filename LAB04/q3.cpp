#include<iostream>
using namespace std;
int main()
{
  // declare variables
  double grade1, grade2, grade3;
  double sum, average;

  // take input graded from end user
  cout << "Enter your grades : ";
  cin >> grade1 >> grade2 >> grade3;

  // calculate sum 
  sum = grade1 + grade2 + grade3;
  
  // calculate average 
  average = sum / 3;

  // display result
  cout << "Average = " << average << endl;
     if (average >= 80 ) {
       cout << " You got an A " << endl;
     }
     else if (average >= 75 && average < 80) {
      cout << " You got AB " << endl;
     }
     else if (average >=70  && average < 75) {
      cout << " You got a B " << endl;
     }
     else if (average >=65  && average < 70) {
      cout << " You got BC" << endl;
     }
     else if (average >=60  && average < 65) {
      cout << " You got a C " << endl;
     }
     else if (average >=40  && average < 60) {
      cout << " You got a D " << endl;
     }
     else {
       cout << " You got an E" << endl;
     }

  return 0;
}