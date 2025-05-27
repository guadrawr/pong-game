#include "Player.h"
#include <raylib.h>
namespace Pong {
void Player::Draw() { DrawRectangle(PlayerX, PlayerY, Width, Height, Kolor); }
void Player::Control(Ball &Ball) {
  if (IsKeyDown(KEY_UP)) {
    PlayerY -= Speed;
  } else if (IsKeyDown(KEY_DOWN)) {
    PlayerY += Speed;
  }
  if (PlayerY <= 0) {
    PlayerY = 0;
  }
  if (PlayerY + Height >= GetScreenHeight()) {
    PlayerY = GetScreenHeight() - Height;
  }
  if (CheckCollisionCircleRec(Vector2{float(Ball.GetX()), float(Ball.GetY())},
                              Ball.GetR(),
                              Rectangle{float(PlayerX), float(PlayerY),
                                        float(Width), float(Height)})) {
    Ball.ReverseSpeedX();
  }
}
} // namespace Pong
