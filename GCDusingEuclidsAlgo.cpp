#include<bits/stdc++.h>
using namespace std;
 
 int GCD(int x,int y ){
    if (y==0)
    {
        return x;
    }
    else
    return GCD(y, x%y);
 }

 int main(){
    int a,b;
    cout<<"Enter the 1st number: ";
    cin>>a;
    cout<<"Enter the 2nd number: ";
    cin>>b;

    cout<<"The greatest common divisor of the input is: "<<GCD(a,b)<<endl;

    return 0;
 }

