#include <iostream>
#include <cstdlib> // For rand() and srand() functions
#include <ctime>   // For time() function

int main() {
    // Seed for the random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));
    
    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;
    
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    
    do {
        std::cout << "Enter your guess (between 1 and 100): ";
        std::cin >> guess;
        attempts++;
        
        if (guess < 1 || guess > 100) {
            std::cout << "Invalid guess. Please enter a number between 1 and 100." << std::endl;
        } else if (guess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > randomNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << std::endl;
        }
        
    } while (guess != randomNumber);

    return 0;
}
