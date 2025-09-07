#include <iostream>
using namespace std;

static int sanity;

void initSanity() {
    sanity = 5;
}

void adjustSanity(int amount) {
    sanity += amount;
    if (sanity < 0) sanity = 0;
}

bool checkSanity() {
    if (sanity <= 0) {
        cout << "Your mind breaks under the isolation...\n";
        return false;
    }
    return true;
}
