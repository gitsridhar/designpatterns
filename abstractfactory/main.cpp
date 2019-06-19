/*
*
g++ main.cpp abstractfactorymazegame.cpp ../door.cpp ../mapsite.cpp ../maze.cpp ../mazegame.cpp ../room.cpp ../wall.cpp
*/
#include <iostream>

#include "abstractfactorymazegame.hpp"

using namespace std;

int main() {

    AbstractFactoryMazeGame game;    
    AbstractFactoryMazeFactory factory;

    Maze *maze = game.CreateMaze(factory);

    Room *r = maze->RoomNo(2);

    cout << r->GetRoomNumber() << endl;

    return(0);
}
