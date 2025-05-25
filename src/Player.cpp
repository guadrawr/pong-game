#include "Player.h"
#include <raylib.h>
#pragma
namespace Pong {
void Player::Draw() { DrawRectangle(PlayerX, PlayerY, Width, Height, Kolor); }
} // namespace Pong
