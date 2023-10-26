
#include <SFML/Graphics.hpp>
#include "engine.hpp"

int main()
{
    Engine engine("Flop");
    engine.run();

    return 0;
}

/*
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    window.setFramerateLimit(60);


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.display();
    }
    

    return 0;
}*/