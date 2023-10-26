#ifndef FLOP_SPRITE_INTERFACE_HPP
#define FLOP_SPRITE_INTERFACE_HPP

#include <SFML/Graphics.hpp>

class SpriteInterface
{
public:
    virtual sf::Drawable *draw() = 0;
};

#endif