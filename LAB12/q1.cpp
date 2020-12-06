#include <iostream>
#include <fstream>
using namespace std;

int main()
{
 int Array[100], min, max, sum = 0;

 ifstream file("lab11_RANDNUM.txt");
 for(int i = 0; i<100;i++){
    file >> Array[i];
 }

 max = Array[0];
 for(int i = 0; i<100 ;i++){
   if(Array[i]>max){
     max=Array[i];
   }
 }

 min = Array[0];
 for(int i = 0; i<100 ;i++){
   if(Array[i]<min){
     min=Array[i];
   }
 }

 cout << "The higest number is :" << max << endl;
 cout << "The lowest number is :" << min << endl;

 for (int i = 0; i<100;i++){
   sum += Array[i];
 }
 
 cout << "The average is : " << sum/100;


}
