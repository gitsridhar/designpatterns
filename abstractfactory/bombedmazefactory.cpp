/*
* g++ bombedmazefactory.cpp abstractfactorymazegame.cpp ../door.cpp ../mapsite.cpp ../maze.cpp ../mazegame.cpp ../room.cpp ../wall.cpp
*/
#include <iostream>

#include "abstractfactorymazegame.hpp"
#include "abstractfactorymazefactory.hpp"
#include "../room.hpp"
#include "../door.hpp"

using namespace std;

class RoomWithABomb : public Room {
    public:
        RoomWithABomb(int n) {
            _roomNumber = n;
        }
};

class BombedWall : public Wall {
    public:
        BombedWall() {}
};

class BombedMazeFactory : public AbstractFactoryMazeFactory {
    public:
        BombedMazeFactory() {
        }

        virtual Room *MakeRoom(int n) const {
            return new RoomWithABomb(n);
        }

        virtual Wall *MakeWall() const {
            return new BombedWall();
        }
};

int main() {
    AbstractFactoryMazeGame game;
    BombedMazeFactory factory;

    Maze *maze = game.CreateMaze(factory);

    Room *r = maze->RoomNo(2);

    cout << r->GetRoomNumber() << endl;

    return(0);
}
