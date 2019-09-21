#include <stdio.h>
#include "fileWithStructs.h"
#include "somethingRandom.h"

int testingMethodFromMainFile() {
    return 42;
}

int main() {
    printf("Hello, World! : %d\n", testingMethodFromMainFile());
    struct point myPoint = getAPoint(4, 2);
    _printCoordinateFunction(&myPoint);

    printf("Random Int: %d\n", getRandomNumber(3,13));
    printf("Random Float: %f\n", getRandomFloat());

    return 0;
}