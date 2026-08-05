#include <iostream>
using namespace std;
int main() {


    // Player attributes
    int playerLevel = 8;
    int playerScore = 1550;
    int minimumLevel = 5;
    int minimumScore = 1000;
    bool hasCompleteMap = true;

    // Relational comparisons
    bool levelQualified = playerLevel >= minimumLevel;
    bool scoreQualified = playerScore >= minimumScore;
    cout << "Level qualified: " << (levelQualified ? "Yes" : "No") << endl;
    cout << "Score qualified: " << (scoreQualified ? "Yes" : "No") << endl;

    // Logical combinations
    bool basicAchievement = levelQualified && scoreQualified;
    bool specialAchievement = basicAchievement && hasCompleteMap;
    bool anyQualification = levelQualified || scoreQualified;
    bool eliteAchievement = playerScore > 1500;
   
    cout << "Basic achievement: " << (basicAchievement ? "Earned" : "Not earned") << endl;
    cout << "Special achievement: " << (specialAchievement ? "Earned" : "Not earned") << endl;
    cout << "Elite achievement: " << (eliteAchievement ? "Earned" : "Not Earned") << endl;
    cout << "Any qualification: " << (anyQualification ? "Yes" : "No") << endl;

    // bool beginnerScore = playerScore == minimumScore;
    // bool beginnerLevel = playerLevel == minimumLevel;
    bool beginnerCheck = (playerLevel > minimumLevel) && (playerScore > minimumScore);

    cout << "Beginner Check: " << ( !beginnerCheck ? "Beginner" : "Non-Beginner") << endl;


    return 0;


}