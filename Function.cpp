#include<iostream>
using namespace std;

int f(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n=10;
    cout << "The sum of the series is: " << f(n) <<endl;
    return 0;
}
