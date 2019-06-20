/*
*
g++ main.cpp buildermazegame.cpp standardmazebuilder.cpp ../door.cpp ../mapsite.cpp ../maze.cpp ../mazegame.cpp ../room.cpp ../wall.cpp
*/
#include <iostream>

#include "buildermazegame.hpp"
#include "standardmazebuilder.hpp"

using namespace std;

int main() {

    Maze *maze;
    BuilderMazeGame game;

    StandardMazeBuilder builder;

    game.CreateMaze(builder);

    maze = builder.GetMaze();

    Room *r = maze->RoomNo(2);

    cout << r->GetRoomNumber() << endl;

    return(0);
}
