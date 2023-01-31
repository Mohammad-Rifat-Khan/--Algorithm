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
