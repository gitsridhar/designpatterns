#ifndef __ABSTRACTFACTORYMAZEFACTORY__
#define __ABSTRACTFACTORYMAZEFACTORY__

#include "../maze.hpp"
#include "../door.hpp"
#include "../room.hpp"
#include "../wall.hpp"

class AbstractFactoryMazeFactory {
    public:
        AbstractFactoryMazeFactory() {};

        virtual Maze *MakeMaze() const {
            return new Maze;
        }

        virtual Wall *MakeWall() const {
            return new Wall;
        }

        virtual Room *MakeRoom(int n) const {
            return new Room(n);
        }

        virtual Door *MakeDoor(Room *r1, Room *r2) const {
            return new Door(r1, r2);
        }
};

#endif
