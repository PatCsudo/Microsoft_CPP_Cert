#include <iostream>

int main() {
    // Constants for game configuration

    const int MAX_PLAYER_LEVEL = 100;
    const double EXPERIENCE_MULTIPLIER = 1.5;
    const char GOLD_TIER_RATING = 'A';

// Using auto for type deduction
    auto currentScore = 98500;   // Compiler deduces int
    auto averagePlayTime = 45.5;     // Compiler deduces double
    auto playerInitial = 'M';   // Compiler deduces char
    auto isOnline = false;  // Compiler deduces bool   
    // int MAX_PLAYER_LEVEL = 50; // this will throw an error
    auto playerLives = 6; // compiler deduces int or short
    auto bonusPointsWon = 25432; // compiler deduces int
    auto shortestPlayTime = 23.2; // compiler deduces double
    auto playerTemp = 37.5f; // compiler deduces float

    // Display constants
    std::cout << "Game Configuration:" << std::endl;
    std::cout << "Max Level: " << MAX_PLAYER_LEVEL << std::endl;
    std::cout << "Experience Multiplier: " << EXPERIENCE_MULTIPLIER << std::endl;
    // Display auto variables
    std::cout << "\nPlayer Data (using auto):" << std::endl;
    std::cout << "Score: " << currentScore << std::endl;
    std::cout << "Average Play Time: " << averagePlayTime << " hours" << std::endl;
    std::cout << "Initial: " << playerInitial << std::endl;
    std::cout << "Online Status: " << isOnline << std::endl;

    // Print out additional variables
    std::cout << "Number of player lives: " << playerLives << std::endl;
    std::cout << "Bonus points won: " << bonusPointsWon << std::endl;
    std::cout << "Shortest Playing time: " << shortestPlayTime << std::endl;
    std::cout << "Player temperature: " << playerTemp << " degrees celcius." << std::endl;

    // Distinguish between int and short using auto
    // std::cout << typeid(playerLives).name() << std::endl;

    std::cout << "\nAnswesr to lab questions:\n" << std::endl;

    std::cout << "What happens when you try to change a const variable?" << std::endl;
    std::cout << "Answer: An error will be thrown.\n" << std::endl;

    std::cout << "Can you declare an auto variable without initializing it?" << std::endl;
    std::cout << "Answer: No.\n" << std::endl;

    std::cout << "How does auto help make your code cleaner and easier to read?" << std::endl;
    std::cout << "Answer: Using auto makes it less likely that errors will be\
\nmade when assigning variable types." << std::endl;


    return 0;
}