#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    //vector<int>num={2,5,6,8,9,11,22};

int n;
cout<<"Enter the total element number: ";
cin>>n;

vector<int>num(n);

cout<<"Enter the elements: ";

for (int i = 0; i <n; i++)
{
    cin>>num[i];
}


    sort(num.begin(),num.end(),greater<int>());

    int second_largest = num[1];

    cout<<"The 2nd largest number of inputs is: "<<second_largest<<endl;

    return 0;
}