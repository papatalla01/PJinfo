#include "clientAPI.h"
#include <stdio.h>
#include "snakeAPI.h"
#include <stdlib.h>

int sizeX, sizeY, nbWalls, walls;

int main(){
	connectToServer("localhost", 1234, "BlackMamba");
	waitForSnakeGame("TRAINING RANDOM_PLAYER difficulty=2 timeout=100 seed=123 start=0", "Test_1",&sizeX, &sizeY, &nbWalls);
    getSnakeArena(&walls);
    printArena();
    
  /*  sendMove(t_move move)
    getMove(t_move* move)*/
	closeConnection();
    return(0);
}