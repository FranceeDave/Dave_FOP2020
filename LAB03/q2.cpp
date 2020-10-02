#include<iostream>
using namespace std;
 
int main()
{
//state the variable
  int time;

// input the time
   cout << " Hi there , what time is it now ? " << endl;
   cin >> time;

// state wether its morning ,evening ,night
   
    if (time >= 0 && time < 12) {
     cout<< " GOOD MORNING!!" << endl;
    }
    if (time >= 13 && time < 17){
     cout << " GOOD AFTERNOON :)" << endl;
    }
    if (time >= 17 && time <= 24) {
     cout << " GOOD EVENING!! " << endl;
    }
    else if (time > 24)
    {cout<< "error" << endl;}
   
   return 0 ;

}