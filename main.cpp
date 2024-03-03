#include <iostream>
#include "rotatingCube.h"

int main(int argc, char *args[]){
    float cubeEdgeLength = 0.0;
    RotatingCube cube1;
 

    std::cout << "Enter edge length of cube" <<std::endl;
    std::cin >> cubeEdgeLength;
    while (std::cin.fail()){
        std::cout << "Input is not decimal number" <<std::endl;
        // user didn't input a number
        std::cin.clear(); // reset failbit
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
    // next, request user reinput
        std::cin >> cubeEdgeLength;
    }
    //std::cout << "Number is " << cubeEdgeLength <<std::endl;

    cube1.setCubeEdge(cubeEdgeLength);
    cube1.printCubeEdge();
    std::cout << cube1.drawCube();

return 0; 

}