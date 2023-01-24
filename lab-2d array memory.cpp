#include<bits/stdc++.h>
using namespace std;
int **Matrix(int r, int c)
{
 int **m = new int*[r];
 for(int i=0; i<c; i++)
 {
 m[i]= new int[c];
 }
 return m;
}
void printMatrix(int **p, int rows, int colums)
{
 for(int i=0; i<rows; i++)
 {
 for(int j=0; j<colums; j++)
 {
 cout<<p[i][j]<<" ";
 }

 cout<<endl;
 }
 cout<<endl;
}
void addValuse(int **k,int r,int c){
 for(int i=0; i<r; i++)
 {
 for(int j=0; j<c; j++)
 {
 k[i][j]=rand()%10;
 }
 }
}
int main()
{
 srand(time(0));
 int **A = Matrix(5,5);
 addValuse(A,5,5);
 printMatrix(A,5,5);
 int **B = Matrix(5,5);
 addValuse(B,5,5);
 printMatrix(B,5,5);
 return 0;
}

