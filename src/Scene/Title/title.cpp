
#include "title.h"
#include "../../System/scene_mgr.h"
#include "../../MyLib/graph.h"
#include "../../MyLib/key.h"
#include "../Game/game_main.h"

#include "../../Object/task.h"
#include "../../Object/Player/player.h"


Title::Title(SceneMgr* mgr) :
Scene(mgr),
player(std::make_shared<Player>())
{
  Task::getInstance().add(player->getName(),
                          player);
}


void Title::update() {
  if (Key::get().isPush(KeyEvent::KEY_k)) {
    m_mgr->shiftNextScene(std::make_shared<GameMain>(m_mgr));
  }
  if (Key::get().isPush(KeyEvent::KEY_a)) {
    Task::getInstance().kill(player->getName());
  }
  Task::getInstance().update();
}

void Title::draw() {
  ly::drawStrokedCube(Vec3f(getWindowCenter(), 0.0f),
                      Vec3f(50.f, 50.f, 50.f),
                      ColorA::white());
  Task::getInstance().draw();
}