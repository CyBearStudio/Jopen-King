#ifndef CHARACTER_H
#define CHARACTER_H

#include "SFML/Graphics.hpp"

class Character : public sf::Drawable, public sf::Transformable {

    enum State{Idle, Running_left, Running_right, Jumping, Charging_jump, Collision, Falling, Land, Dead};

public:
    Character(sf::Vector2f pos = sf::Vector2f(0.f,0.f));

private:

    State curr_state;
};



#endif
