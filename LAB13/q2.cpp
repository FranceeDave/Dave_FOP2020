#include <bits/stdc++.h> 
using namespace std; 
  
int find(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = {1, 4, 7, 2 , 6 , 3 , 5 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 5; 
  
    int index = find(arr, n, x); 
    if (index == -1) 
        cout << "Number is not found"; 
    else
        cout << "Number found at position " << index; 
  
    return 0; 
} 