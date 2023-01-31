/*Algorithm 6 Selection Sort
1: procedure SelectionSort(A, n)
2: for i ← 0, n − 1 do
3: iMin ← i
4: for j ← i + 1, n − 1 do
5: if A[j] < A[iMin] then
6: iMin = j
7: end if
8: swap(A[iMin],A[i])
9: end for
10: end for
11: end procedure*/


#include<iostream>
using namespace std;

int selectionSort(int arr[], int n){
for(int i=0;i<n-1;i++){
    int min_index= i;
    for(int j=i+1;j<n;j++){
        if(arr[j] < arr[min_index])
        min_index = j;

    }
      swap(arr[min_index], arr[i]);
}

}

void printArray(int arr[], int s) {
  for (int i = 0; i < s; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  cout << "Sorted array in Acsending Order:\n";
  printArray(data, size);

  return 0;
}
