#include<bits/stdc++.h>
using namespace std;

int main(){
    ofstream fout;
    fout.open("1k.txt");
    srand(time(0));

    for(int i=0;i<10000;i++){\
    fout<<rand()%10000+1<<endl;
    }
    return 0;
}
