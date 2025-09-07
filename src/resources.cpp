#include <iostream>
using namespace std;

static int food;
static int warmth;

void initResources() {
    food = 5;
    warmth = 5;
}

void adjustFood(int amount) {
    food += amount;
    if (food < 0) food = 0;
}

void adjustWarmth(int amount) {
    warmth += amount;
    if (warmth < 0) warmth = 0;
}

bool checkResources() {
    if (food <= 0) {
        cout << "You starve in the frozen wastes...\n";
        return false;
    }
    if (warmth <= 0) {
        cout << "The cold claims you...\n";
        return false;
    }
    return true;
}

void showStatus() {
    cout << "[Food: " << food << " | Warmth: " << warmth << "]\n";
}
