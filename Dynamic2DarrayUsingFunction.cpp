#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int **Matrix(int r, int c){
    int **m= new int*[r];
for(int i=0;i<r;i++){
    m[i]=new int [c];
    }
    return m;
}
int main(){
srand(time(0));
int row;
int column;
cin>>row>>column;
int randomNum;
int **p = Matrix(row,column);

for (int i = 0; i < 10; i++) {
int randomNum = rand() % 10;}

for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        p[i][j]= randomNum;
    }
}
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    }
