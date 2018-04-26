#pragma once

#include "Entity.hpp"
#include <string>

class Projectile : public Entity {
public:
    Projectile();
    ~Projectile();
    void update();
    void updateMovement();
    void setPosition(sf::Vector2f pos);
private:
    float movementSpeed = 1;
    int attackDamage = 10;
};