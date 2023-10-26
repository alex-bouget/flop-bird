#ifndef FLOP_ENGINE_HPP
#define FLOP_ENGINE_HPP

#include "engine_interface.hpp"
#include <SFML/Graphics.hpp>

class Engine : public EngineInterface
{

private:
    TextureManagerInterface *textureManager;
    SpriteManagerInterface *spriteManager;
    EventManagerInterface *eventManager;
    sf::RenderWindow *window;
public:
    Engine(std::string title);
    void run();
    SpriteManagerInterface *getSpriteManager();
    TextureManagerInterface *getTextureManager();
    EventManagerInterface *getEventManager();
};