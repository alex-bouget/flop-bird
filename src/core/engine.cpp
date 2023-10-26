#include "engine.hpp"
#include "event_manager.hpp"

Engine::Engine(std::string title)
{
    window = new sf::RenderWindow(sf::VideoMode(800, 600), title);
    window->setFramerateLimit(60);
    textureManager = new TextureManager();
    spriteManager = new SpriteManager(window);
    eventManager = new EventManager(window);
}

void Engine::run()
{
    while (window->isOpen())
    {
        eventManager->handleEvents();
        window->clear();
        spriteManager->drawSprites();
        window->display();
    }
}

SpriteManagerInterface *Engine::getSpriteManager()
{
    return spriteManager;
}

TextureManagerInterface *Engine::getTextureManager()
{
    return textureManager;
}

EventManagerInterface *Engine::getEventManager()
{
    return eventManager;
}