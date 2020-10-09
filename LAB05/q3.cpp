#include<iostream>
using namespace std;
#include <string>
int main() {
//state the variables
  int answer;
  string ContinueLoop = "yes";
  
  //generate random number
  srand(time(0));
  int num = rand() % 100;
//display first outcome of welcoming introduction
  cout << "Hello, welcome to the game\n"
       << "Rules are simple : Guess my number from 1-100 :) \n"
       <<"3..\n"
       <<"2..\n"
       <<"1..\n";
  while (ContinueLoop == "yes")
{
  //user guess the number
  cout<< "Whats your answer?" <<endl;
  cin>>answer;
   
   //State the condition
     if (answer == num){
       cout<< "WOAH EINSTEIN!!!" << endl;
        srand(time(0));
        num = rand() % 100;
     } 
     else if (answer < num){
       cout<< "Nahh, its still lower than my number, my number is = " << num << endl;
     }
     else {
       cout<< "Nahh, its still higher than my number, my number is = " << num << endl;
     }
     //ask if user wants to continue
     cout<< "Would you like to try again? " << endl;
     cin>> ContinueLoop;
     if (ContinueLoop == "No" ) {
       cout<< "Thankyou for playing the game" << endl;
     }
} 
     return 0;
}