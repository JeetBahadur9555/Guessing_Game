#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    int numberToGuess, userGuess;
    int maxGuesses = 5; // Number of attempts allowed
    int attempts = 0;

    // Initialize random seed
    srand(time(0));

    // Generate a random number between 1 and 100
    numberToGuess = rand() % 100 + 1;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "You have " << maxGuesses << " attempts to guess it." << endl;

    // Game loop
    while (attempts < maxGuesses) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        attempts++;

        if (userGuess == numberToGuess) {
            cout << "Congratulations! You guessed the correct number!" << endl;
            break;
        } else if (userGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Too low! Try again." << endl;
        }

        if (attempts == maxGuesses) {
            cout << "Sorry, you've used all your attempts. The number was: " << numberToGuess << endl;
        }
    }

    return 0;
}
