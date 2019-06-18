#include <iostream>
#include "room.hpp"

Room::Room(int roomNo) {
    _roomNumber = roomNo;
}

MapSite *Room::GetSide(Direction d) const {
    switch(d) {
        case North: return _sides[0];
        case South: return _sides[1];
        case East: return _sides[2];
        case West: return _sides[3];
    }
}

void Room::SetSide(Direction d, MapSite *s) {
    switch(d) {
        case North: _sides[0] = s;
        case South: _sides[1] = s;
        case East: _sides[2] = s;
        case West: _sides[3] = s;
    }
}

void Room::Enter() {
}
