#ifndef __MAZE__
#define __MAZE__

#include <vector>
#include "room.hpp"

using namespace std;

class Maze {
    public:
        Maze();

        void AddRoom(Room *);
        Room *RoomNo(int);

    private:
        vector<Room> rooms;
};

#endif
