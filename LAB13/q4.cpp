#include <iostream>
#include <fstream>
using namespace std;

//binarySearch
void binarySearch(const int list[], int key, int arraysz, int index)
{
  int min = 0;
  int max = arraysz - 1;

  while (max >= min)
  {
    int mid = (min + max) / 2;
    if (key < list[mid]){
      max = mid - 1;
    }  
    else if (key == list[mid]){
      index= mid;
      break;
    }
    else if (key > list[mid])
      min = mid + 1;
  }
  
  if (key == list[index]){
    cout << "You won the lottery!! " << endl;
  }
  else {
    cout << "Unlucky, please buy more tickets :)" << endl;
  }
  
  
}

//selection sorting
void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}


int main () {

  int Array[7];
  int num,index;
  int n = sizeof(Array)/sizeof(Array[0]);
  //given Array
  ifstream file("lottery_winner.txt");
    for(int i = 0; i < 7; i++){
      file >> Array[i];
    }
  //after sorting
  selectionSort(Array, n);
  for (int i = 0; i < n; i++)
   cout<< Array[i] << endl;


  //let user input
  cout << "enter your lottery number" << endl;
  cin >> num;
  if (num == static_cast<char>(num)){
    cout << "error input" << endl;
    return 0;
  }
  else if (num < 999 && num > 9999){
    cout << "error input" << endl;
    return 0;
  }
  
  //binarySearch
  binarySearch(Array,num,7,index);

return 0;
}