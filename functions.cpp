#include<iostream>
using namespace std;

double f(double x){
    return x*x;
}

int main(){
    cout<<"Enter the value of x: ";
    double x;
    cin>>x;

    cout<<"f(x)= "<<f(x)<<endl;
    return 0;
}