//
// Created by isaidnocookies on 9/13/2019.
//

#ifndef CTESTINGAPPLICATION_FILEWITHSTRUCTS_H
#define CTESTINGAPPLICATION_FILEWITHSTRUCTS_H

#include <stdio.h>

typedef struct point
{
    int x;
    int y;
};

void _printCoordinateFunction(const struct point *xAndY) {
    printf("(%d, %d)\n", xAndY->x, xAndY->y);
}

struct point getAPoint (int iX, int iY) {
    struct point myNewPoint = {iX, iY};
    return myNewPoint;
}

#endif //CTESTINGAPPLICATION_FILEWITHSTRUCTS_H
