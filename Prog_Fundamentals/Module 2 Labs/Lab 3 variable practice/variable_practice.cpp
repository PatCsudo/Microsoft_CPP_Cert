#include <iostream>
int main() {
    
    // Declare and initialize variables for player data
    int playerLevel = 5;
    double experiencePoints = 1250.75;
    char difficultyRating = 'B';
    bool hasCompletedTutorial = true;

    // Three more variables
    float playerSpeed = 5.52f;
    short playerLives = 12;
    char playerRating = 'B';

    // Display the player information
    std::cout << "Player Profile:" << std::endl;
    std::cout << "Level: " << playerLevel << std::endl;
    std::cout << "Experience: " << experiencePoints << std::endl;
    std::cout << "Difficulty Rating: " << difficultyRating << std::endl;
    std::cout << "Completed Tutorial: " << hasCompletedTutorial << std::endl;
    
    // Print out additional variables
    std::cout << "Player speed: " << playerSpeed << std::endl;
    std::cout << "Number of lives: " << playerLives << std::endl;
    std::cout << "Player rating: " << playerRating << std::endl;

    return 0;
}

/*

Why might you choose double over float for experience points?
Ans: The precision available when using double might be required to distinguish
between player experiences. More memory might be required as well,
but currently it is not clear why this might be the case.

When would short be more appropriate than int?
Ans: When the range of integers needed is much less than int, and
because the memory required is not as large.

What happens if you forget to initialize a variable before using it?
Ans: A garbage answer, i.e., a random value, will be assigned to it.
Using an unitialised variable will give garbage answers when utilised.
*/
