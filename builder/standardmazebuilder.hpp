#ifndef __STANDARD_MAZE_BUILDER__
#define __STANDARD_MAZE_BUILDER__

#include "mazebuilder.hpp"

class StandardMazeBuilder : public MazeBuilder {
    public:
        StandardMazeBuilder();

        virtual void BuildMaze();
        virtual void BuildRoom(int room);
        virtual void BuildDoor(int roomFrom, int roomTo);

        virtual Maze *GetMaze();

    private:
        Direction CommonWall(Room *, Room *) { return South; }
        Maze *_currentMaze;
};

#endif
