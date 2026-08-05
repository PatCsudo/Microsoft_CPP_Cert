#include <iostream>
using namespace std;
int main() {

    // Demonstrate precedence in arithmetic operations
    int baseDamage = 15;
    int weaponBonus = 10;
    int strengthMultiplier = 3;

    // Without parentheses - multiplication happens first
    int damage1 = baseDamage + weaponBonus * strengthMultiplier;
    cout << "Damage without parentheses: " << damage1 << endl;

    // With parentheses - addition happens first
    int damage2 = (baseDamage + weaponBonus) * strengthMultiplier;
    cout << "Damage with parentheses: " << damage2 << endl;

    int totalDamage;
    if (damage1 > damage2) {
        totalDamage = damage1;
    }
    else {
        totalDamage = damage2;
    }

    // Complex expression with multiple operators
    int level = 2;
    int experience = 99;
    bool isAdvanced = totalDamage > 100 && (level > 3) || (experience >= 50 * 2);
    cout << "Advanced player: " << (isAdvanced ? "Yes" : "No") << endl;

    return 0;
}