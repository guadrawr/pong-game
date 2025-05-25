#include "Ball.h"
#include <raylib.h>
namespace Pong {
void Ball::Draw() { DrawCircle(BallX, BallY, Radius, Kolor); }
} // namespace Pong
