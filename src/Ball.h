#ifndef BALL_H
#define BALL_H
#include "Screen.h"
#include <raylib.h>
namespace Pong {
class Ball {
private:
  float BallX, BallY;
  int Radius = 15;
  Color Kolor = {255, 255, 255, 255};
  int speed_x{7}, speed_y{7};

public:
  Ball(const ScreenSize &Screen)
      : BallX(Screen.GetWidth() / 2.0f), BallY(Screen.GetHeight() / 2.0f) {}
  int GetX() const { return BallX; }
  int GetY() const { return BallY; }
  void Draw();
  void Move();
};
} // namespace Pong
#endif
