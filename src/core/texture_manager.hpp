#include "texture_manager_interface.hpp"

#include <map>
class TextureManager : public TextureManagerInterface
{
public:
    TextureManager();
    ~TextureManager();
    sf::Texture* getTexture(std::string name) = 0;
    sf::Texture* getTexture(std::string name, std::string path, bool force = true) = 0;
private:
    std::map<std::string, sf::Texture> textures;
};