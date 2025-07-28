#include <SFML/Graphics.hpp>
#include "config.h"

#pragma once
class snake_element
{
private:
	int x, y;
	sf::Color color;
	
public:
	snake_element(int x_p, int y_p, sf::Color color_p) {
		x = x_p * SNAKE_WIDTH;
		y = y_p * SNAKE_HEIGHT;

		color = color_p;
	}

	int getX() { return x; }

	int getY() { return y; }

	sf::RectangleShape getDrawable() {
		sf::RectangleShape snake_elem;

		snake_elem.setPosition(sf::Vector2f(x, y));
		snake_elem.setFillColor(color);

		return snake_elem;
	}
};

