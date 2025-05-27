#ifndef CPU_H
#define CPU_H
#include "Ball.h"
#include "Screen.h"
#include <raylib.h>
#pragma once
extern Pong::ScreenSize Screen;
extern Pong::Ball Ball;
namespace Pong {
class CPU {
private:
  int Width = 25;
  int Height = 120;
  int CPUX = 0;
  int CPUY = 0;
  Color Kolor = {255, 255, 255, 255};
  float Speed{6.0f};

public:
  CPU(const ScreenSize &Screen)
      : CPUX(Screen.GetWidth() - (Width + 10)),
        CPUY(Screen.GetHeight() / 2 - (Height / 2)) {}
  int GetX() const { return CPUX; }
  int GetY() const { return CPUY; }
  float GetSpeed() const { return Speed; }
  void Draw();
  void AIControl(Ball &Ball);
};
} // namespace Pong
#endif
