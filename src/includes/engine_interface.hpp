#ifndef FLOP_ENGINE_INTERFACE_HPP
#define FLOP_ENGINE_INTERFACE_HPP

#include <SFML/Graphics.hpp>

#include "texture_manager_interface.hpp"
#include "event_manager_interface.hpp"
#include "sprite_manager_interface.hpp"

class EngineInterface
{
    public:
    virtual void run() = 0;
    virtual SpriteManagerInterface* getSpriteManager() = 0;
    virtual TextureManagerInterface* getTextureManager() = 0;
    virtual EventManagerInterface* getEventManager() = 0;
};

#endif