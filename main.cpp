#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // seed for random number generation

    int randomNumber = rand() % 100 + 1; // number between 1 and 100
    int guess;

    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > randomNumber) {
            cout << "Too high! Try a smaller number." << endl;
        }
        else if (guess < randomNumber) {
            cout << "Too low! Try a bigger number." << endl;
        }
        else {
            cout << "Congratulations! You guessed it right!" << endl;
        }

    } while (guess != randomNumber);

    return 0;
}
