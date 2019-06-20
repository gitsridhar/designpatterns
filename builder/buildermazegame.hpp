#ifndef __BUILDERMAZEGAME__
#define __BUILDERMAZEGAME__

#include "../maze.hpp"
#include "mazebuilder.hpp"

class BuilderMazeGame {
    public:
        Maze *CreateMaze(MazeBuilder &builder);
};

#endif
