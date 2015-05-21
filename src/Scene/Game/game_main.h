
#pragma once
#include "../scene.h"


class GameMain : public Scene {
private:

public:
  GameMain(SceneMgr*);
  ~GameMain() = default;

  void update();
  void draw();
};