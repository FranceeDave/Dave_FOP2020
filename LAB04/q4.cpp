#include<iostream>
using namespace std;
int main()
{

//state the variables
double weight;
double height;
double BMI;

// input end user weight and height
cout<< " Input your weight (kg): "<< endl;
cin >> weight;

cout<< " Input your height (M): "<< endl;
cin>> height;

//calculate the BMI
BMI = weight / (height*height);

//Determine BMI value
if ( BMI < 18.5 ){
  cout<< " You are Underweight"<<endl;
}
else if (BMI >= 18.5 && BMI <=24.9) {
  cout<<" You are NORMAL "<< endl;
}
else if (BMI >= 25 && BMI <=29.9) {
  cout<<" You are OVERWEIGHT" << endl;
}
else {
  cout<< " obesity " << endl;
}
return 0;
}
