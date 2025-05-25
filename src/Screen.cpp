#include "Screen.h"
#include <raylib.h>

namespace Pong {
void ScreenSize::Window() const {
  InitWindow(Width, Height, "Pong Game");
  SetTargetFPS(60);
}
void ScreenSize::MidLine() const {
  DrawLine(Width / 2, 0, Width / 2, Height, WHITE);
}
} // namespace Pong
