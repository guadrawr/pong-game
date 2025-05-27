#include "CPU.h"
#include <raylib.h>
namespace Pong {
void CPU::Draw() { DrawRectangle(CPUX, CPUY, Width, Height, Kolor); }
void CPU::AIControl(Ball &Ball) {
  if (CPUY + float(Height) / 2 > Ball.GetY()) {

    CPUY = CPUY - Speed;
  }
  if (CPUY + float(Height) / 2 <= Ball.GetY()) {
    CPUY = CPUY + Speed;
  }
  if (CheckCollisionCircleRec(
          Vector2{float(Ball.GetX()), float(Ball.GetY())}, Ball.GetR(),
          Rectangle{float(CPUX), float(CPUY), float(Width), float(Height)})) {
    Ball.ReverseSpeedX();
  }
}
} // namespace Pong
