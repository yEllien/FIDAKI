#pragma once

#include <sfml/Graphics.hpp>
#include <vector>

using namespace sf;
using namespace std;

class Snake
{
public:
	Snake();

	vector <Vector2f> s;
	
	void create();
};

