#ifndef LEVEL_H
#define LEVEL_H

#include "SFML/Graphics.hpp"

class Level : public sf::Drawable {

public:
    Level(sf::Texture lvl);

private:
    sf::Sprite img;
    int nb_levels = 43;
    float size_level = 232.5;
};



#endif
