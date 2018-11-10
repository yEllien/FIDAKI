#include "Map.h"
#include "Snake.h"
#include <SFML/Graphics.hpp>



Map::Map() 
{
    for(int i = 0; i < CUBE_NUMBER; i++)
    {
		map.push_back(vector <RectangleShape>());

        for(int j = 0; j < CUBE_NUMBER; j++)
        {
			RectangleShape tmp;

			tmp.setSize(Vector2f(CUBE_SIZE, CUBE_SIZE));
			tmp.setPosition(Vector2f(CUBE_SIZE*i, CUBE_SIZE*j));
			tmp.setFillColor(Color::Black);

			map[i].push_back(tmp) ;
			
        }
    }
}

		
void Map::draw(RenderWindow *a, Snake* s)
{
	a->clear();


	for (int i = 0; i < s->s.size(); i++)
	{
		map[s->s[i].x][s->s[i].y].setFillColor(Color::White);
	}

	for (int i = 0; i < CUBE_NUMBER; i++)
	{
		for (int j = 0; j < CUBE_NUMBER; j++)
		{
			a->draw(map[i][j]);
		}
	}

	a->display();
}
		


