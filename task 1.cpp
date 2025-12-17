#include <iostream>
using namespace std;

int main() {
    int secret = 7;
    int guess;

    do {
        cout << "Guess the number: ";
        cin >> guess;

        if (guess < secret) {
            cout << "Too low! Try again.\n";
        } else if (guess > secret) {
            cout << "Too high! Try again.\n";
        }

    } while (guess != secret);

    cout << " Correct! You guessed the number.\n";
    return 0;
}