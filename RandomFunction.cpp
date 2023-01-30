#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
srand(time(0)); // Initialize the random seed, By using the srand function to set a different seed value each time you run your program, you can generate a different sequence of random numbers each time, which is more random.

//int randomNum = rand() % 100 + 1; // Generate a random number between 1 and 100

//double randomNum = rand(); //Generate random number

//int randomNum = rand()%10; //generates random number from 0 to 10

for (int i = 0; i < 10; i++) {
int randomNum = rand() % 10+1; // generate a random number between 0 and 9
cout << randomNum << " ";
}
//cout << "Random number: " << randomNum << endl;
return 0;
}