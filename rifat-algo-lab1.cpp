#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the max number of fibonacci series: ";
    cin>>n;
    int a=0,b=1;
  cout<<"Series: ";
        for(int i =1;i<=n;++i){
        if(n==0){
            cout<<"1";
        }
        if(n==1){
            cout<<a<<", ";
            continue;
        }
        if(n==2){
            cout<<b<<", ";
            continue;
        }
        int s=0;
        s=a+b;
        a=b;
        b=s;
        cout<<s<<", ";
    }

return 0;
}
