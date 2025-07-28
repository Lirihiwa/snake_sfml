#include <queue>
#include "snake_element.h"
#include "config.h"

#pragma once
class snake
{
private:
	// Map 
	int x, y;
	std::queue<snake_element> snake_entity;

	bool checkMove(int x_p, int y_p) {
		return x_p > MAP_WIDTH || y_p > MAP_HEIGHT;
	}

public:
	snake(int x_p, int y_p) {
		snake_element s_e(x_p, y_p, SNAKE_HEAD_COLOR);

		snake_entity.push(s_e);
	}

	void move(int dx, int dy) {
		int nextX = x + dx, nextY = y + dy;

		if (checkMove(nextX, nextY)) {
			snake_element s_e(1, 3, SNAKE_HEAD_COLOR);

			snake_entity.push(s_e);
			snake_entity.pop();
		}

	}

	std::queue<snake_element> getSnake() {
		return snake_entity;
	}
};

