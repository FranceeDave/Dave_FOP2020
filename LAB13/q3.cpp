#include <iostream>
using namespace std;
//declare function
void selectionSort(double [], int);
int binarySearch(const int list[], int key, int listSize);
//state the function formula
int binarySearch(const int list[], int key, int listSize)
{
  int low = 0;
  int high = listSize - 1;

  while (high >= low)
  {
    int mid = (low + high) / 2;
    if (key < list[mid])
      high = mid - 1;
    else if (key == list[mid])
      return mid;
    else
      low = mid + 1;
  }

  return -low - 1;
}
//state function formula 
void selectionSort(int list[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    // Find the minimum in the list[i..listSize-1]
    double currentMin = list[i];
    int currentMinIndex = i;

    for (int j = i + 1; j < size; j++)
    {
      if (currentMin > list[j])
      {
        currentMin = list[j];
        currentMinIndex = j;
      }
    }

    // Swap list[i] with list[currentMinIndex] if necessary;
    if (currentMinIndex != i)
    {
      list[currentMinIndex] = list[i];
      list[i] = currentMin;
    }
  }
}
 
int main(){
   int size = 7;
   int list[] = {1,4,7,2,6,3,5};


selectionSort(list, 7);

  for (int i = 0;i < 7; i++)
  {
    cout << list[i] <<  " " ;
  }
  cout << endl << "The number 5 is found in element " << binarySearch(list, 5, 7) << endl;
return 0;
  }
 
 