#ifndef __WALL__
#define __WALL__

#include "mapsite.hpp"

class Wall : public MapSite {
    public:
        Wall();
        virtual void Enter();
};

#endif
