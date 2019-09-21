//
// Created by isaidnocookies on 9/13/2019.
//

#include <stdlib.h>
#include "somethingRandom.h"

int getRandomNumber(int min, int max) {
    int randNum = rand() % (max - min);
    return randNum + min;
}

float getRandomFloat() {
    return (float)rand() / (float)(13/6);
}

