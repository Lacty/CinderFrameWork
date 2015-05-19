
#pragma once
#include "../MyLib/noncopyable.h"


class Scene : public ly::noncopyable {
protected:
  Scene();
  ~Scene() = default;

  virtual void update() = 0;
  virtual void draw()   = 0;
};