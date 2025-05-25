#ifndef PLAYER_H
#define PLAYER_H
#include "Screen.h"
#include <raylib.h>
namespace Pong {
class Player {
private:
  int Width = 25;
  int Height = 120;
  int PlayerX = 0;
  int PlayerY = 0;
  Color Kolor = {255, 255, 255, 255};

public:
  Player(const ScreenSize &Screen)
      : PlayerX(10), PlayerY(Screen.GetHeight() / 2 - (Height / 2)) {}
  int GetX() const { return PlayerX; }
  int GetY() const { return PlayerY; }
  void Draw();
};
} // namespace Pong
#endif
