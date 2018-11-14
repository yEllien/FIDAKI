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
	void draw(RenderWindow* a);
	void update(RenderWindow* a);

private:
	Vector2f dir = {0,0};
    Vector2f dir1 = {0,0};
	Snake s;
    Snake s1;
	Event ev;
    vector <vector <RectangleShape>> map;
	Vector2i food;
   
};

