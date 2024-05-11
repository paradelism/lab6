#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter any integer: ";
    cin >> number;

    int numDigits = 0;
    int tempNumber = number;
    for (; tempNumber != 0; tempNumber /= 10) {
        numDigits++;
    }

    int result = 0;
    int multiplier = 1;

    for (int i = 0; i < numDigits; ++i) {
        int digit = number % 10; 
        number /= 10; 

        if (digit != 3 && digit != 6) {
            result += digit * multiplier;
            multiplier *= 10; 
        }
    }

    cout << "Result after removing digits 3 and 6: " << result << endl;

    return 0;
}
