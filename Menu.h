#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Menu
{
public:
	Menu(Texture& texture_menu);
	Sprite menu;
	int menu_x;
	int menu_y;
	void Draw(RenderWindow& window);
};