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

void Snake::move(Vector2f vec)
{

	s[0] += vec;
	
	if (s[0].x > CUBE_NUMBER-1)
	{
		s[0].x -= CUBE_NUMBER;
	}
	else if (s[0].x < 0)
	{
		s[0].x += CUBE_NUMBER-1;
	}


	if (s[0].y > CUBE_NUMBER-1)
	{
		s[0].y -= CUBE_NUMBER;
	}
	else if (s[0].y < 0)
	{
		s[0].y += CUBE_NUMBER-1;
	}



	for (int i = s.size()-1; i > 0; i--)
	{
		s[i] = s[i - 1];
	}


}

void Snake::check()
{
	for (int i = 3; i < s.size(); i++)
	{
		if (s[0] == s[i])
		{
			vector <Vector2f> a;
			a.push_back(Vector2f(CUBE_NUMBER / 2, CUBE_NUMBER / 2));
			s = a;
		}
	}

}