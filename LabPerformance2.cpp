#include<bits/stdc++.h>
using namespace std;

int selectionSort(int *a, int n){
for(int i=0;i<n-1;i++){
    int min_index= i;
    for(int j=i+1;j<n;j++){
        if(a[j] < a[min_index])
        min_index = j;

    }
      swap(a[min_index], a[i]);
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
    fout.open("3k.txt");
     ifstream fin("3k.txt");


    srand(time(0));
    for(int i=0;i<n;i++)
    {
        fout<<rand()%1000+1<<endl;
    }

   for(int i=0;i<n;i++)
   {
       fin>>a[i];
   }



  selectionSort(a, n);
  //cout << "Sorted array in Acsending Order:\n";
  printArray(a, n);

  return 0;
}
