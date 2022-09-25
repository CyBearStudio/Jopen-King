#include "Character.h"

Character::Character(sf::Vector2f pos){
        this->setPosition(pos);
        this-> curr_state = Idle;
}
