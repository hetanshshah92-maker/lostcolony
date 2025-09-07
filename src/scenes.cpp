#include <iostream>
#include <cstdlib>
#include "scenes.h"
#include "resources.h"
#include "sanity.h"
using namespace std;

void exploreScene() {
    int roll = rand() % 4;

    if (roll == 0) {
        cout << "You find a storage room. Some rations remain.\n";
        adjustFood(2);
    } else if (roll == 1) {
        cout << "You explore the generator room. It's cold and flickers dangerously.\n";
        adjustWarmth(-1);
    } else if (roll == 2) {
        cout << "You discover old research journals. They whisper strange theories...\n";
        adjustSanity(-1);
    } else {
        cout << "You rest by a broken heater. Time passes quietly.\n";
        adjustWarmth(1);
    }
}
