#include <stdio.h>
#include "fileWithStructs.h"
#include "somethingRandom.h"
#include "WTF"

#ifndef TESTINGCONDITION
#define TESTINGCONDITION

int shouldntBeAvailableIfCompiled() {
    return 0;
}

#endif

//typedef float FLOAT;
const FLOAT hereISAThing = 1.0F;

FLOAT testingMethodWithWeirdReturn() {
    return 43.4;
}

int testingMethodFromMainFile() {
    return 42;
}

void* returnSomethingWeird() {
    return (void*)0;
}

int main() {
    printf("Hello, World! : %d\n", testingMethodFromMainFile());
    struct point myPoint = getAPoint(4, 2);
    _printCoordinateFunction(&myPoint);

    printf("Random Int: %d\n", getRandomNumber(3,13));
    printf("Random Float: %f\n", getRandomFloat());

    if (returnSomethingWeird()) {
        printf("Something Weird");
    }

    return 0;
}