
#include "game_main.h"
#include "../../System/scene_mgr.h"
#include "../../MyLib/graph.h"


GameMain::GameMain(SceneMgr* mgr) :
Scene(mgr) {}


void GameMain::update() {

}

void GameMain::draw() {
  ly::drawCube(Vec3f(getWindowCenter(), 0.f),
               Vec3f(50.f, 50.f, 50.f),
               ColorA(1.f, 1.f, 1.f, 0.5f));
}