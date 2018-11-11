#include <SFML/Graphics.hpp>
#include <cstdlib>
#include "Map.h"
#include "Snake.h"
#include <Windows.h>


using namespace std;
using namespace sf;


 
int main()
{


	RenderWindow win (VideoMode ( CUBE_NUMBER *CUBE_SIZE ,CUBE_NUMBER*CUBE_SIZE), "Snake" );
	
	Map map;
	

	while (win.isOpen())
	{

		float start = std::clock();

		map.update(&win);
		

		float duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;

		Sleep(CUBE_NUMBER/1.5-duration);

	}


	return 0;
}