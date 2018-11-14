#include "Map.h"
#include "Snake.h"
#include <SFML/Graphics.hpp>
#include <cstdlib>



Map::Map() 
{
	srand(time(0));

	food = { CUBE_NUMBER / 2,CUBE_NUMBER / 2 };

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

		
void Map::draw(RenderWindow *a)
{
	a->clear();

	for (int i = 0; i < CUBE_NUMBER; i++)
	{
		for (int j = 0; j < CUBE_NUMBER; j++)
		{
			map[i][j].setFillColor(Color::Black);
		}
	}

	for (int i = 0; i < s.s.size(); i++)
	{
		map[s.s[i].x][s.s[i].y].setFillColor(Color::White);
	}

    for (int i = 0; i < s1.s.size(); i++) {
        map[s1.s[i].x][s1.s[i].y].setFillColor(Color::White);
    }

	map[food.x][food.y].setFillColor(Color::Red);

	for (int i = 0; i < CUBE_NUMBER; i++)
	{
		for (int j = 0; j < CUBE_NUMBER; j++)
		{
			a->draw(map[i][j]);
		}
	}

    a->display();
}
		

void Map::update(RenderWindow *a)
{

	s.move(dir);
    s1.move(dir1);
	draw(a);
    

   
	if (food == Vector2i(s.s[0]))
	{
		s.create();
		food = { rand() % CUBE_NUMBER, rand() % CUBE_NUMBER };
	}

    if (food == Vector2i(s1.s[0])) {
        s1.create();
        food = {rand() % CUBE_NUMBER, rand() % CUBE_NUMBER};
    }

	s.check();


	while (a->pollEvent(ev))
	{
		if (ev.type == Event::KeyPressed)
		{
			switch (ev.key.code)
			{
            case Keyboard::Up:
                if (dir1 != Vector2f(0, 1)) {
                    dir1.x = 0;
                    dir1.y = -1;
                }
                break;
            case Keyboard::Left:
                if (dir1 != Vector2f(1, 0)) {
                    dir1.x = -1;
                    dir1.y = 0;
                }
                break;
            case Keyboard::Down:
                if (dir1 != Vector2f(0, -1)) {
                    dir1.x = 0;
                    dir1.y = 1;
                }
                break;
            case Keyboard::Right:
                if (dir1 != Vector2f(-1, 0)) {
                    dir1.x = 1;
                    dir1.y = 0;
                }
                break;
			case Keyboard::W:
				if (dir != Vector2f(0, 1))
				{
					dir.x = 0;
					dir.y = -1;
				}
				break;
			case Keyboard::A:
				if (dir != Vector2f(1, 0))
				{
					dir.x = -1;
					dir.y = 0;
				}
				break;
			case Keyboard::S:
				if (dir != Vector2f(0, -1))
				{
					dir.x = 0;
					dir.y = 1;
				}
				break;
			case Keyboard::D:
				if (dir != Vector2f(-1, 0))
				{
					dir.x = 1;
					dir.y = 0;
				}
				break;
			}
		}
	}
}


