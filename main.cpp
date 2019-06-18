#include <iostream>

#include "mazegame.hpp"

using namespace std;

int main() {

    MazeGame game;    

    Maze *maze = game.CreateMaze();

    Room *r = maze->RoomNo(2);

    cout << r->GetRoomNumber() << endl;

    return(0);
}
