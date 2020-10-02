#include<iostream>
using namespace std;
 
int main()
{

int age;
//let end user input his/her age
cout<<" Input your age "<<endl;
cin>> age;
// display age status
if (age >= 0 && age < 12) {
  cout<< " Child " << endl;
}
else if (age >= 12 && age < 18) {
  cout<< " Teenager" << endl;
}
else if (age >= 18 ) {
  cout<< " Adult " << endl;
}
else {
  cout << " error " << endl;
}
return 0;
}
