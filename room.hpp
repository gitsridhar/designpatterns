#ifndef __ROOM__
#define __ROOM__

#include "mapsite.hpp"

enum Direction {North, South, East, West};

class Room : public MapSite {
    public:
        Room(int roomNo = 0);

        int GetRoomNumber() {
            return _roomNumber;
        }
        MapSite * GetSide(Direction) const;
        void SetSide(Direction, MapSite *);

        virtual void Enter();

    private:
        MapSite *_sides[4];

    protected:
        int _roomNumber;
};

#endif
