#include <iostream>
using namespace std;

//prototype
void printArray (int[], int);
void swap (int[], int, int);
void swap2(int[], int, int);


int main() {
    const int Arraysz = 7;
    int myArray[Arraysz] = {1, 4, 7, 2 , 6 , 3 , 5 };
    
    for(int i = 0; i < Arraysz - 1; i++){
        int x = i;
        for (int j = i + 1; j< Arraysz; j++){
            if (myArray[j] > myArray[x])
                x = j;
        }
        swap(myArray, x, i);
       // swap2(myArray,i, x);
    }

    printArray (myArray, Arraysz);
    return 0;
}

void printArray (int list[], int size){
    
    cout << "{";
    for(int i = 0 ; i < size; i++){
        if (i != size - 1)
            cout << list[i] << ", ";
        else
            cout << list[i] << "}" << endl;
    }
}

 //ascending
void swap (int myList[], int x, int i){
  char temp;

  temp = myList[x];
  myList[x] = myList[i];
  myList[i] = temp;

}

//descending
void swap2 (int myList[], int x, int i){
  char temp;

  temp = myList[i];
  myList[i] = myList[x];
  myList[x] = temp;

}