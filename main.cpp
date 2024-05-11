#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A;
    cout << "Enter an integer A: ";
    cin >> A;

    int sumOfDigits = 0;
    int tempA = abs(A); 
    for (; tempA != 0; tempA /= 10) {
        sumOfDigits += tempA % 10; 
    }

    int cubeOfSum = 1;
    for (int i = 0; i < 3; ++i) {
        cubeOfSum *= sumOfDigits;
    }

    if (cubeOfSum == A * A) {
        cout << "The cube of the sum of digits of the number equals the square of number A" << endl;
    } else {
        cout << "The cube of the sum of digits of the number don't equal the square of number A" << endl;
    }

    return 0;
}
