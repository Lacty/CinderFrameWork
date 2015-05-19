
#pragma once
#include "../scene.h"


class Title : public Scene {
private:

public:
  Title(SceneMgr*);
  ~Title() = default;

  void update();
  void draw();
};