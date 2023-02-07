#include<bits/stdc++.h>
using namespace std;

int main(){
    ofstream fout("5k.txt");
    ifstream fin("5k.txt");
    int *a=new int[10];

      for(int i=0;i<10;i++){\
    fout<<rand()%10+1<<endl;
    }
    srand(time(0));
    for(int i=0;i<10;i++){
        fin>>a[i];
    }

    for(int i=0;i<10;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}
