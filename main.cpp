#include <iostream>
using namespace std;

int main() {
    int A,B;
    cout << "Enter the first number: ";
    cin >> A;
    cout << "Enter the second number: ";
    cin >> B;
    int min_ab = min(A,B);
    for(int i = 1; i <= min_ab; i++) {
        if(A % i == 0 && B%i==0) {
            cout << i << endl;
        }
    }

    return 0;
}
