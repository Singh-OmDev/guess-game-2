#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
    std::srand(std::time(0)); 
    int numberToGuess;
    int userGuess = 0;
    int numberOfTries = 0;
    int maxRange = 100;
    char level;

    
    std::cout << "Welcome to the Guess the Number game!" << std::endl;
    std::cout << "Choose a difficulty level: (E)asy, (M)edium, (H)ard: ";
    std::cin >> level;

    
    if (level == 'E' || level == 'e') {
        maxRange = 50;
    } else if (level == 'M' || level == 'm') {
        maxRange = 100;
    } else if (level == 'H' || level == 'h') {
        maxRange = 200;
    } else {
        std::cout << "Invalid choice. Defaulting to Medium level." << std::endl;
        maxRange = 100;
    }

    
    numberToGuess = std::rand() % maxRange + 1;

    std::cout << "I have selected a number between 1 and " << maxRange << ". Try to guess it!" << std::endl;

    
    while (userGuess != numberToGuess) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        numberOfTries++;

        if (userGuess > numberToGuess) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (userGuess < numberToGuess) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number in " << numberOfTries << " tries." << std::endl;
        }
    }

    return 0;
}
