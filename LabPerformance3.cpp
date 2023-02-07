#include<bits/stdc++.h>
using namespace std;

int insertionSort(int *a, int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}
void printArray(int *arr, int s) {
  for (int i = 0; i < s; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int n;
    cin>>n;

  int *a = new int[1000];
   ofstream fout;
    fout.open("10k.txt");
     ifstream fin("10k.txt");


    srand(time(0));
    for(int i=0;i<n;i++)
    {
        fout<<rand()%1000+1<<endl;
    }

   for(int i=0;i<n;i++)
   {
       fin>>a[i];
   }



  insertionSort(a, n);

  printArray(a, n);

  return 0;
}
