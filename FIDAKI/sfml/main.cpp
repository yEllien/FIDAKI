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
	RenderWindow win2(VideoMode(CUBE_NUMBER *CUBE_SIZE, CUBE_NUMBER*CUBE_SIZE), "Snake");

    int h = VideoMode::getDesktopMode().height / 4;
    int w = VideoMode::getDesktopMode().width / 4;

    win.setPosition(Vector2i(w*0.5 ,h));
    win2.setPosition(Vector2i(w*1.5 + (CUBE_NUMBER * CUBE_SIZE),h));

	Map map;
    Map map2;

	while (win.isOpen())
	{

		float start = std::clock();

		map.update(&win);
        map.update(&win2);
		

		float duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;

		Sleep(CUBE_NUMBER*2-duration);

	}


	return 0;
}