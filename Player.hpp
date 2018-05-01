#pragma once

#include "Entity.hpp"
#include <string>

class Player : public Entity {
public:
  Player();
  ~Player();
  void update();
  void updateMovement();
  void loadTexture(sf::Texture &tex);
  void hit(float attack);
  float getLife();
  void disableMoveUp();
  void disableMoveDown();
  void disableMoveLeft();
  void disableMoveRight();
  void movePlayer(sf::Vector2f mv);
  
private:
  bool canMoveLeft;
  bool canMoveRight;
  bool canMoveUp;
  bool canMoveDown;
  float movementSpeed = 0.2;
  int attackDamage = 5;
  float life = 100;
  int walkCounter = 0;
};
