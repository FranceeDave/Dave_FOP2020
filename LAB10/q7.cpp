#include <iostream>
using namespace std;

void yearcount (int, int&, int&, int&);

int main ()
{
  int num,num1,num2,num3;

  cout << "enter number" << endl;
  cin>>num;

  yearcount(num,num1,num2,num3);
  cout<<"There are " << num1 << "year" <<endl; 
  cout<<"There are " << num2 << "month" <<endl; 
  cout<<"There are " << num3 << "days" <<endl; 

  return 0;
}
void yearcount(int remainder,int& year,int& month,int& days)
{
  year = remainder / 365;
  remainder %= 365;
  month = remainder / 30;
  remainder %= 30;
  days = remainder;

}