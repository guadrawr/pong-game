#ifndef BALL_H
#define BALL_H
#include "Screen.h"
#include <raylib.h>
#pragma once
namespace Pong {
class Ball {
private:
  int BallX, BallY;
  int Radius = 15;
  Color Kolor = {255, 255, 255, 255};
  float SpeedX{7.0f}, SpeedY{7.0f};

public:
  Ball(const ScreenSize &Screen)
      : BallX(Screen.GetWidth() / 2), BallY(Screen.GetHeight() / 2) {}
  int GetX() const { return BallX; }
  int GetY() const { return BallY; }
  int GetR() const { return Radius; }
  float GetSpeedX() const { return SpeedX; }
  float GetSpeedY() const { return SpeedY; }
  void ReverseSpeedX() { SpeedX *= -1; }
  void Draw();
  void Move();
};
} // namespace Pong
#endif
