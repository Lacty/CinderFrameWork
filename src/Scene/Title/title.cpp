
#include "title.h"
#include "../../System/scene_mgr.h"
#include "../../MyLib/graph.h"
#include "../../MyLib/key.h"
#include "../Game/game_main.h"


Title::Title(SceneMgr* mgr) :
Scene(mgr) {}


void Title::update() {
  if (Key::get().isPush(KeyEvent::KEY_k)) {
    m_mgr->shiftNextScene(std::make_shared<GameMain>(m_mgr));
  }
}

void Title::draw() {
  ly::drawStrokedCube(Vec3f(getWindowCenter(), 0.0f),
                      Vec3f(50.f, 50.f, 50.f),
                      ColorA::white());
}