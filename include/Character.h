#ifndef CHARACTER_H
#define CHARACTER_H

#include "SFML/Graphics.hpp"

class Character : public sf::Drawable, public sf::Transformable {

    enum State{Idle, Running_left, Running_right, Jumping, Charging_jump};

public:
    Character(sf::Vector2f pos = sf::Vector2f(0.f,0.f));


private:
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    std::map<State,sf::Texture> sprites;
    State curr_state;

};



#endif
