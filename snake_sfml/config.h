#pragma once

#include <SFML/Graphics.hpp>

// Window
const int WINDOW_HEIGHT = 500;
const int WINDOW_WIDTH = 500;

// Map
const int MAP_HEIGHT = 50;
const int MAP_WIDTH = 50;

// Snake
const int SNAKE_HEIGHT = WINDOW_HEIGHT / WINDOW_HEIGHT;
const int SNAKE_WIDTH = WINDOW_WIDTH / WINDOW_WIDTH;
const sf::Vector2i SIZE = sf::Vector2i(SNAKE_WIDTH, SNAKE_HEIGHT);
const sf::Color SNAKE_BODY_COLOR = sf::Color::Blue;
const sf::Color SNAKE_HEAD_COLOR = sf::Color::Green;