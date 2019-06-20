#ifndef __COUNTING_MAZE_BUILDER__
#define __COUNTING_MAZE_BUILDER__

#include "mazebuilder.hpp"

class CountingMazeBuilder : public MazeBuilder {
    public:
        CountingMazeBuilder();

        virtual void BuildMaze() {}
        virtual void BuildRoom(int room);
        virtual void BuildDoor(int roomFrom, int roomTo);
        virtual void AddWall(int, Direction) {}

        virtual void GetCounts(int &, int &) const;

    private:
        int _doors;
        int _rooms;
};

#endif
