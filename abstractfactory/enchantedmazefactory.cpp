/*
* g++ enchantedmazefactory.cpp abstractfactorymazegame.cpp ../door.cpp ../mapsite.cpp ../maze.cpp ../mazegame.cpp ../room.cpp ../wall.cpp
*/
#include <iostream>

#include "abstractfactorymazegame.hpp"
#include "abstractfactorymazefactory.hpp"
#include "../room.hpp"
#include "../door.hpp"

using namespace std;

class Spell {
    public:
        Spell() {
        }
};

class EnchantedRoom : public Room {
    public:
        EnchantedRoom(int n, Spell *spell) {
            _roomNumber = n;
        }
};

class DoorNeedingSpell : public Door {
    public:
        DoorNeedingSpell(Room *r1, Room *r2) {}
};

class EnchantedMazeFactory : public AbstractFactoryMazeFactory {
    public:
        EnchantedMazeFactory() {
        }

        virtual Room *MakeRoom(int n) const {
            return new EnchantedRoom(n, CastSpell());
        }

        virtual Door *MakeDoor(Room *r1, Room *r2) const {
            return new DoorNeedingSpell(r1, r2);
        }

    protected:
        Spell *CastSpell() const {
            return NULL;
        }
};

int main() {
    AbstractFactoryMazeGame game;
    EnchantedMazeFactory factory;


    Maze *maze = game.CreateMaze(factory);

    Room *r = maze->RoomNo(2);

    cout << r->GetRoomNumber() << endl;

    return(0);
}
