#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Ініціалізація генератора випадкових чисел
    int secretNumber = rand() % 500 + 1; // Генеруємо випадкове число в діапазоні від 1 до 500
    int guess, attempts;
    clock_t start, end;
    double elapsedTime;

    cout << "Welcome to Guess the Number game!\n";
    cout << "I've chosen a number between 1 and 500. Try to guess it!\n";

    start = clock(); // Початок відліку часу

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
            end = clock(); // Кінець відліку часу
            elapsedTime = double(end - start) / CLOCKS_PER_SEC; // Обчислення часу, який пройшов для вгадування
            cout << "Congratulations! You've guessed the number " << secretNumber << " in " << attempts << " attempts.\n";
            cout << "It took you " << elapsedTime << " seconds.\n";
            break;
        }
    }

    return 0;
}
