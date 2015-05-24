
#include "../../MyLib/graph.h"
#include "../task.h"
#include "player.h"
#include <memory>


Player::Player() {
  m_name = std::string("Player");
}

Player::~Player() {
  Task::getInstance().kill(m_name);
}


void Player::update() {

}

void Player::draw() {
  ly::drawCube(Vec3f(0, 0, 0),
               Vec3f(50, 50, 50),
               ColorA::white());
}