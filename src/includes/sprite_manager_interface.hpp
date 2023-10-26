#ifndef FLOP_SPRITE_MANAGER_INTERFACE_HPP
#define FLOP_SPRITE_MANAGER_INTERFACE_HPP

#include <SFML/Graphics.hpp>
#include "sprite_interface.hpp"

class SpriteManagerInterface
{
public:
    virtual void addSprite(SpriteInterface* sprite) = 0;
    virtual void removeSprite(SpriteInterface* sprite) = 0;
    virtual void drawSprites() = 0;
};


#endif