#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 
    int secretNumber = rand() % 500 + 1; 
    int guess, attempts;
    clock_t start, end;
    double elapsedTime;

    cout << "Welcome to Guess the Number game!\n";
    cout << "I've chosen a number between 1 and 500. Try to guess it!\n";

    start = clock();

    for (attempts = 1; ; attempts++) {
        cout << "Enter your guess (or 0 to quit): ";
        cin >> guess;

        if (guess == 0) {
            cout << "You've quit the game.\n";
            return 0;
        }
        else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        }
        else if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        }
        else {
            end = clock();
            elapsedTime = double(end - start) / CLOCKS_PER_SEC; 
            cout << "Congratulations! You've guessed the number " << secretNumber << " in " << attempts << " attempts.\n";
            cout << "It took you " << elapsedTime << " seconds.\n";
            break;
        }
    }

    return 0;
}
