#ifndef __ABSTRACTFACTORYMAZEGAME__
#define __ABSTRACTFACTORYMAZEGAME__

#include "../maze.hpp"
#include "abstractfactorymazefactory.hpp"

class AbstractFactoryMazeGame {
    public:
        Maze *CreateMaze(AbstractFactoryMazeFactory &factory);
};

#endif
