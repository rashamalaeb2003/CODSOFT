#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(std::time(0));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;

    // Initialize variables
    int guessedNumber = 0;
    int attempts = 0;

    std::cout << "Welcome to the Guess the Number Game!" << std::endl;
    std::cout << "I have selected a random number between 1 and 100. Try to guess it." << std::endl;

    while (guessedNumber != secretNumber) {
        // Get user input
        std::cout << "Enter your guess: ";
        std::cin >> guessedNumber;

        // Increment the number of attempts
        attempts++;

        // Check if the guess is too high or too low
        if (guessedNumber > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        }
        else if (guessedNumber < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        }
        else {
            std::cout << "Congratulations! You guessed the correct number " << secretNumber << " in " << attempts << " attempts." << std::endl;
        }
    }

    return 0;
}
