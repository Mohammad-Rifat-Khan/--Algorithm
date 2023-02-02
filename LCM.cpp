#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the 1st number: ";
    cin>>a;
    cout<<"Enter the 2nd number: ";
    cin>>b;
    
    cout<<"The LCM of given numbers is: "<<a*b/__gcd(a,b)<<endl;

    return 0;
}