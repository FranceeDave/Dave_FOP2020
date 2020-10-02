#include<iostream>
using namespace std;
 
int main() {
//state the variables
  srand(time(NULL));
  float num = rand() % 100,answer;
//display first outcome of welcoming introduction
  cout << "Hello, welcome to the game\n"
       << "Rules are simple : Guess my number from 1-100 :) \n"
       <<"3..\n"
       <<"2..\n"
       <<"1..\n"
       <<"So? Whats your answer?" <<endl;
  cin>>answer;
   
   //State the condition
   if (answer >0 && answer <=100){
     if (num == answer){
       cout<< "WOAH EINSTEIN!!!" << endl;
     } 
     else if (answer < num){
       cout<< "Nahh, its still lower than my number, my number is = " << num << endl;
     }
     else {
       cout<< "Nahh, its still higher than my number, my number is = " << num << endl;
     }
     }
     return 0;
   }