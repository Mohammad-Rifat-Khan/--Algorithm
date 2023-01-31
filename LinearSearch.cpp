#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int x){
 for (int i = 0; i < n; i++)
    if (arr[i] == x)
      return i;
  return -1;
  }

int main(){

int n;
cin>>n;

int *a=new int [n];
srand(time(0));

for(int i=0;i<n;i++)
    a[i]=rand()%1000;

for(int i=0;i<n;i++)
    cout<<a[i]<<endl;

    int index = linearSearch(a,n,25);
    if(index==-1)
        cout<<"not found"<<endl;
    else
        cout<<"Found"<<a[index]<<"in position "<<index<<endl;
    return 0;
}
