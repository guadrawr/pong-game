#include "Player.h"
#include <raylib.h>
#pragma
namespace Pong {
void Player::Draw() { DrawRectangle(PlayerX, PlayerY, Width, Height, Kolor); }
void Player::Control() {
  if (IsKeyDown(KEY_UP)) {
    PlayerY -= Up;
  } else if (IsKeyDown(KEY_DOWN)) {
    PlayerY += Down;
  }
}
} // namespace Pong
