#include<iostream>
using namespace std;
 
int main()
{

//let user enter month and year
int month;
int year;

cout<< " enter month number : " << endl;
cin>> month;

cout<< " enter year : " << endl;
cin>> year;

switch (month) {

  //if it's january
  case 1 : 
   cout << " it has 31 days " ;

break;
  //if it's february
  case 2 :
   if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
     cout<< " it has 29 days"<< endl;
   }
   else {
     cout << "it has 28 days"<< endl;
   }
break;
  // if it's march
  case 3 :
   cout << " it has 31 days ";
break;
  // if it's april
  case 4 :
   cout << " it has 30 days ";
break;
  // if it's may
  case 5 :
   cout << " it has 31 days ";
break;
  // if it's june
  case 6 :
   cout << " it has 30 days ";
break;
  // if it's july
  case 7 :
   cout << " it has 31 days ";
break;
  // if it's august
  case 8 :
   cout << " it has 31 days ";
break;
  // if it's september
  case 9 :
   cout << " it has 30 days ";
break;
  // if it's october
  case 10 :
   cout << " it has 31 days ";
break;
  // if it's november
  case 11 :
   cout << " it has 30 days ";
break;
  // if it's december
  case 12 :
   cout << " it has 31 days ";
break;

default :
          cout << " ERROR " << endl;
          break;
}
return 0;
}
