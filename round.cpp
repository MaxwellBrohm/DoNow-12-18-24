#include <iostream>
#include <cmath>  
#include <cstdio>

using namespace std;
// Function to round a number to two decimal places
double roundToTwoDecimalPlaces(double value) {
    return round(value * 100.0) / 100.0;
}

int main() {
    double num;

    // Get the number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Round the number to two decimal places and display it
    double roundedNum = roundToTwoDecimalPlaces(num);
    printf("Rounded number: %f", roundedNum);

    return 0;
}
