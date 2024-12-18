#include <iostream>
#include <ctime>   
#include <cstdio>

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(0)));

    // Generate a random number between 1 and 10
    int randomNumber = rand() % 10 + 1;

    // Display the random number
    printf("Random number between 1 and 10: %d", randomNumber);

    return 0;
}


