#include <iostream>
#include <vector>
#include <iterator>
#include "maze.hpp"
#include "room.hpp"

using namespace std;

Maze::Maze() {
}

void Maze::AddRoom(Room *r) {
    rooms.push_back(*r);
}

Room *Maze::RoomNo(int number) {
    vector<Room>::iterator it;
    for(it = rooms.begin(); it != rooms.end(); it++) {
        Room r = *it;
        if (r.GetRoomNumber() == number) {
            return &(*it);
        }
    }
    return NULL;
}
