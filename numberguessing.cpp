#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Initialize random seed
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;
    const int maxAttempts = 10;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100. Can you guess it?" << endl;

    while (attempts < maxAttempts) {
        cout << "Enter your guess: ";
        cin >> guess;

        // Check if the guess is within the valid range
        if (guess < 1 || guess > 100) {
            cout << "Please guess a number between 1 and 100." << endl;
            continue;
        }

        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            break;
        }

        // Provide feedback on the number of attempts left
        if (attempts == maxAttempts) {
            cout << "Sorry, you've used all your attempts. The number was " << secretNumber << "." << endl;
        } else {
            cout << "You have " << (maxAttempts - attempts) << " attempts left." << endl;
        }
    }

    return 0;
}