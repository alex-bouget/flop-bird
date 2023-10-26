#ifndef FLOP_TEXTURE_MANAGER_INTERFACE_HPP
#define FLOP_TEXTURE_MANAGER_INTERFACE_HPP

#include <SFML/Graphics.hpp>

class TextureManagerInterface
{
public:
    virtual sf::Texture* getTexture(std::string name) = 0;
    virtual sf::Texture* getTexture(std::string name, std::string path, bool force = true) = 0;
};

#endif