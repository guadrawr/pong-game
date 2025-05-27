#include "Ball.h"
#include <raylib.h>
Pong::ScreenSize Screen;
namespace Pong {
void Ball::Draw() { DrawCircle(BallX, BallY, Radius, Kolor); }
void Ball::Move() {
  BallX += SpeedX;
  BallY += SpeedY;
  if (BallY + Radius >= GetScreenHeight() || BallY - Radius <= 0) {
    SpeedY *= -1;
  }
  if (BallX + Radius >= GetScreenWidth() || BallX - Radius <= 0) {
    SpeedX *= -1;
  }
}
} // namespace Pong
