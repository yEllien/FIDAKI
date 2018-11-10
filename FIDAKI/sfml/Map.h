#pragma once
#include <vector>
#include "Defines.h"
#include <SFML/Graphics.hpp>
#include "Snake.h"

using namespace std;
using namespace sf;

class Map {
public:
    Map();
	void draw(RenderWindow* a, Snake *s);

private:
    vector <vector <RectangleShape>> map;


   
};

