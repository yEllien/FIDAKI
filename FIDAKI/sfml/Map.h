#pragma once
#include "Defines.h"
#include <SFML/Graphics.hpp>

using namespace sf;

class Map {
public:
    Map();

private:
    RectangleShape map[CUBE_NUMBER][CUBE_NUMBER];


   
};

