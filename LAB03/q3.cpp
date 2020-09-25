#include<iostream>
using namespace std;
 
int main()
{
 // state the variable
  char X;
  cout<< " Input the alphabet : ";
  cin>>X;
//do the operations to determine its status
  {
    if ( X== 'a' || X== 'i' || X== 'u' || X== 'e'||X== 'o')
    cout<< " Your character is a vowel"<< endl;
    
    else if (X== '1' || X== '2' || X== '3' || X== '4' ||X== '5' || X== '6' || X== '7' || X== '8' || X== '9' || X== '0')
    cout<< " Alphabet is REQUIRED " <<  endl;

    else 
    cout<<"Your character is a consonant"<<endl;
  }
  return 0;
}