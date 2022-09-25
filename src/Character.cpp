#include "Character.h"

Character::Character(sf::Vector2f pos){
        this->setPosition(pos);
        this-> curr_state = Idle;
        this->draw();

}

virtual void Character::draw(sf::RenderTarget& target, sf::RenderStates states){
    // apply the entity's transform -- combine it with the one that was passed by the caller
    states.transform *= getTransform(); // getTransform() is defined by sf::Transformable

    // you may also override states.shader or states.blendMode if you want

    // draw the vertex array
    target.draw(this->sprites[this->curr_state]);
}



