/* This calculation is done by using Euclid's in-built function; 
if you want to write the function, here it is-> 
int GCD(int x,int y ){
    if (y==0)
    {
        return x;
    }
    else
    return GCD(y, x%y);
 }

 for more than two numbers just use __gcd(__gcd(12,18),20);

 */

#include<bits/stdc++.h>
using namespace std;

int main(){
cout<<__gcd(12,18)<<endl;
    return 0;
}
