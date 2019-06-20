/*
* g++  buildermazegame.cpp countingmazebuilder.cpp ../door.cpp ../mapsite.cpp ../maze.cpp ../mazegame.cpp ../room.cpp ../wall.cpp
*/
#include <iostream>
#include "buildermazegame.hpp"
#include "countingmazebuilder.hpp"

CountingMazeBuilder::CountingMazeBuilder() {
    _rooms = _doors = 0;
}

void CountingMazeBuilder::BuildRoom(int roomNumber) {
    _rooms++;
}

void CountingMazeBuilder::BuildDoor(int r1, int r2) {
    _doors++;
}

void CountingMazeBuilder::GetCounts(int &rooms, int &doors) const {
    rooms = _rooms;
    doors = _doors;
}

int main() {
    int rooms, doors;
    BuilderMazeGame game;
    CountingMazeBuilder builder;

    game.CreateMaze(builder);

    builder.GetCounts(rooms, doors);

    cout << rooms << " " << doors << endl;

    return(0);
}
