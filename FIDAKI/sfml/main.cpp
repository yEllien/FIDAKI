#include <SFML/Graphics.hpp>
#include <cstdlib>
#include "Map.h"
#include "Snake.h"


using namespace std;
using namespace sf;


 
int main()
{
	RenderWindow win (VideoMode ( CUBE_NUMBER *CUBE_SIZE ,CUBE_NUMBER*CUBE_SIZE), "Snake" );
	
	Map map;

	Snake s;

	while (win.isOpen())
	{
		Event ev;

		map.draw(&win, &s);

	}


	return 0;
}