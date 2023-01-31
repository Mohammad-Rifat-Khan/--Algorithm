/*Algorithm 5 Bubble Sort
1: procedure BubbleSort(A, n)
2: for k ← 0, n − 1 do
3: for i ← 0, n − 1 do
4: if A[i] > A[i + 1] then
5: swap(A[i],A[i + 1]
6: end if
7: end for
8: end for
9: end procedure*/

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
     int n;
    cout<<"Enter the number of elements: ";    
    cin>>n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
