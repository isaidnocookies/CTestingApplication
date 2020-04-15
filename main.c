#include <stdio.h>
#include "fileWithStructs.h"
#include "somethingRandom.h"

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