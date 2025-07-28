#include <SFML/Graphics.hpp>
#include "config.h"
#include "snake.h"
#include "queue"

using namespace std;
using namespace sf;

int main()
{

    RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), L"Snake", Style::Default);

    snake sn(1, 1);

    window.setVerticalSyncEnabled(true);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        auto snake_entity = sn.getSnake();
        RectangleShape s_e = snake_entity.front().getDrawable();

        window.draw(s_e);

        window.clear();
        window.display();
    }
    return 0;
}