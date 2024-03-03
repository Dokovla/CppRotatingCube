//Comments / Author / CPP file

#include "rotatingCube.h"
#include "extsrc/include/SDL.h"

RotatingCube::RotatingCube(){
    std::cout <<"Constructor is executed!" << std::endl;
};

void RotatingCube::setCubeEdge(float cubeEdge){
    this->cubeEdge = cubeEdge;
};

void RotatingCube::printCubeEdge(){
    std::cout <<"Cube edge is set to: " << this->cubeEdge << std::endl;
}       
        
int RotatingCube::drawCube(){

    int retVal;
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;

    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_CreateWindowAndRenderer(640, 480, 0, &window, &renderer);
    SDL_RenderSetScale(renderer,2,2);

    SDL_SetRenderDrawColor(renderer,0,0,0,255);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer,255, 255,255,255);
    //SDL_RenderDrawPoint(renderer, 640/2, 480/2);
    retVal= SDL_RenderDrawLine(renderer,0,0,1000,1000);

    SDL_RenderPresent( renderer );

    SDL_Delay(10000);

    return retVal;

};