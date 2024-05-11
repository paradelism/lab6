#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int amount;
    int choice;
    cout << "Hi there, it's currency converter menu\n";
    cout << "Choose what you want to convert:\n";
    cout << "Hrivnas to dollars(1)\n";
    cout << "Hrivnas to euros(2)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the amount of hrivnas: ";
        cin >> amount;
        cout << "hrivnas->dollars : " << amount/38.00 << " dollars";
    }
    else if (choice == 2) {
        cout << "Enter the amount of hrivnas: ";
        cin >> amount;
        cout << "hrivnas->euros : " << amount/40.00 << " euros";
    }
    else {
        cout << "Invalid choice!";
    }

    return 0;
}
