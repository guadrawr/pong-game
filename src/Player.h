#ifndef PLAYER_H
#define PLAYER_H
#include "Ball.h"
#include "Screen.h"
#include <raylib.h>
#pragma once
namespace Pong {
class Player {
private:
  int Width = 25;
  int Height = 120;
  int PlayerX = 0;
  int PlayerY = 0;
  Color Kolor = {255, 255, 255, 255};
  float Speed{5.0f};

public:
  Player(const ScreenSize &Screen)
      : PlayerX(10), PlayerY(Screen.GetHeight() / 2 - (Height / 2)) {}
  int GetX() const { return PlayerX; }
  int GetY() const { return PlayerY; }
  int GetW() const { return Width; }
  int GetH() const { return Height; }
  float GetSpeed() const { return Speed; }
  void Draw();
  void Control(Ball &Ball);
};
} // namespace Pong
#endif
