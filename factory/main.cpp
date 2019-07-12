/*
*
g++ main.cpp creator2.cpp ../door.cpp ../mapsite.cpp ../maze.cpp ../mazegame.cpp ../room.cpp ../wall.cpp
*/
#include <iostream>

using namespace std;

#include "creator2.hpp"

int main() {
    StandardCreator<MyProduct> myCreator;
    return(0);
}
