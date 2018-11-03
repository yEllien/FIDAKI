#include "Snake.h"
#include <vector>
#include <SFML/Graphics.hpp>
#include "Defines.h"

using namespace std;
using namespace sf;



Snake::Snake()
{
	s.push_back(Vector2f(CUBE_NUMBER/2, CUBE_NUMBER/2));
}

void Snake::create()
{
	s.push_back(Vector2f(0, 0));
}
