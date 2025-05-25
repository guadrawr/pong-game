#ifndef BALL_H
#define BALL_H
#include "Screen.h"
#include <raylib.h>
namespace Pong {
class Ball {
private:
  int BallX;
  int BallY;
  int Radius = 15;
  Color Kolor = {255, 255, 255, 255};

public:
  Ball(const ScreenSize &Screen)
      : BallX(Screen.GetWidth() / 2), BallY(Screen.GetHeight() / 2) {}
  int GetX() const { return BallX; }
  int GetY() const { return BallY; }
  void Draw();
};
} // namespace Pong
#endif
