#include <SFML/Graphics.hpp>
#include <queue>

using namespace std;
using namespace sf;

int main()
{

    RenderWindow window(VideoMode(600, 400), L"Snake", Style::Default);

    window.setVerticalSyncEnabled(true);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.display();
    }
    return 0;
}