
#pragma once
#include "../scene.h"
#include <memory>

class Player;

class Title : public Scene {
private:
  std::shared_ptr<Player> player;

public:
  Title(SceneMgr*);
  ~Title() = default;

  void update();
  void draw();
};