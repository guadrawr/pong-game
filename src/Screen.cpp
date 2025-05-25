#include "Screen.h"
#include <raylib.h>

namespace Pong {
void ScreenSize::InitWindow() const {
  ::InitWindow(Width, Height, "Pong Game");
  SetTargetFPS(60);
}
} // namespace Pong
