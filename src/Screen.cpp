#include "Screen.h"
#include <raylib.h>

namespace Pong {
void ScreenSize::Window() const {
  InitWindow(Width, Height, "Pong Game");
  SetTargetFPS(60);
}
void ScreenSize::MidLine() const {
  DrawLine(Width / 2, 0, Width / 2, Height, WHITE);
  DrawCircleLines(Width / 2, Height / 2, 200, Color(255, 255, 255, 222));
}
} // namespace Pong
