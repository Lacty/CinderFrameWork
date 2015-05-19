
#include "title.h"
#include "../../System/scene_mgr.h"
#include "../../MyLib/graph.h"


Title::Title(SceneMgr* mgr) :
Scene(mgr) {}


void Title::update() {

}

void Title::draw() {
  ly::drawStrokedCube(Vec3f(getWindowCenter(), 0.0f),
                      Vec3f(50, 50, 50),
                      ColorA::white());
}