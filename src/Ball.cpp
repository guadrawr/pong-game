#include "Ball.h"
#include <raylib.h>
Pong::ScreenSize Screen;
namespace Pong {
void Ball::Draw() { DrawCircle(BallX, BallY, Radius, Kolor); }
void Ball::Move() {
  BallX += speed_x;
  BallY += speed_y;
  if (BallY + Radius >= GetScreenHeight() || BallY - Radius <= 0) {
    speed_y *= -1;
  }
  if (BallX + Radius >= GetScreenWidth() || BallX - Radius <= 0) {
    speed_x *= -1;
  }
}
} // namespace Pong
