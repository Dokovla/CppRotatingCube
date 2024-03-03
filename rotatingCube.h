//Comments / author / ... Header file
#ifndef ROTATINGCUBE_H
#define ROTATINGCUBE_H

#include<stdio.h>
#include <iostream>
// some declarations in

class RotatingCube{
    private:
        float cubeEdge = 0;
    public:
        RotatingCube();
        void setCubeEdge(float cubeEdge);
        void printCubeEdge();
        int drawCube();
}
;
#endif