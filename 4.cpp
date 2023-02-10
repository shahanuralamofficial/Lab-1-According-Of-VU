//Write a C++ program that will take 10 inputs in an array. If an element is greater than 50, assign the element sequentially is another array. Print the second array.

#include <iostream>
using namespace std;

int main() {
  int a[10], b[10], i, j = 0;
  
  cout << "Enter 10 integers: " << endl;
  for ( i = 0; i < 10; i++) {
    cin >> a[i];
    if (a[i] > 50) {
      b[j] = a[i];
      j++;
    }
  }
  
  cout << "The elements greater than 50 are: " << endl;
  for ( i = 0; i < j; i++) {
    cout << b[i] << " ";
  }
  
  return 0;
}

