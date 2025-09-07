#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game.h"
#include "scenes.h"
#include "resources.h"
#include "sanity.h"
#include "endings.h"
using namespace std;

void startGame() {
    srand(time(0));
    int day = 1;
    bool alive = true;

    initResources();
    initSanity();

    while (alive) {
        cout << "\n--- Day " << day << " ---\n";
        showStatus();

        exploreScene();

        if (!checkResources() || !checkSanity()) {
            alive = false;
            break;
        }

        day++;
        if (day > 7) { // survive 7 days to win
            endingVictory();
            return;
        }
    }

    endingDeath();
}
