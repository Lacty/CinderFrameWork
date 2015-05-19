
#include "MyLib/window_size.h"
#include "MyLib/ci_app.h"
#include "MyLib/mouse.h"
#include "MyLib/key.h"
#include "cinder/Rand.h"

#include "System/scene_mgr.h"


class CinderFrameWorkApp : public AppNative {
private:
  SceneMgr scene;

public:
  void mouseDown(MouseEvent event) {
    Mouse::get().PushEvent(event);
  }
  void mouseUp(MouseEvent event) {
    Mouse::get().PullEvent(event);
  }
  void mouseMove(MouseEvent event) {
    Mouse::get().MoveEvent(event);
  }
  void keyDown(KeyEvent event) {
    Key::get().setKeyPush(event.getCode());
    Key::get().setKeyPress(event.getCode());
  }
  void keyUp(KeyEvent event) {
    Key::get().popKeyPress(event.getCode());
    Key::get().setKeyPull(event.getCode());
  }

  void setup();

  void update();
  void draw();
};

void CinderFrameWorkApp::setup() {
  setWindowSize(int(WindowSize::Width),
                int(WindowSize::Height));
  Mouse::get();
  Key::get();
  Rand::randomize();
  gl::enableAlphaBlending();
}

void CinderFrameWorkApp::update() {
  scene.update();
}

void CinderFrameWorkApp::draw() {
  gl::clear();

  scene.draw();

  Mouse::get().flashInput();
  Key::get().flashInput();
}

CINDER_APP_NATIVE(CinderFrameWorkApp, RendererGl)
