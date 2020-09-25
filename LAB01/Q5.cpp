#include <iostream>
using namespace std;

int main()
{
//name the variables
int time1 ;
int time2 ;
int time1new ;
int time2new ;

//given the time in 24 hour format
time1 = 14;
time2 = 21;
//change to 12 hour format
time1new = time1%12;
time2new = time2%12;

//display the results in 12 hour format
cout<<"the time "<<time1<<":00"<<" in 12 hour time format is = "<<time1new<<":00"<<endl;

cout<<"the time "<<time2<<":00"<<" in 12 hour time format is = "<<time2new<<":00"<<endl;

return 0;
}