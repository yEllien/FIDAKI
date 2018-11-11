#pragma once

#include <sfml/Graphics.hpp>
#include <vector>

using namespace sf;
using namespace std;

class Snake
{
public:
	Snake();
	
	void move(Vector2f vec);
	
	vector <Vector2f> s;
	
	void check();

	void create();
};

