#ifndef CPU_H
#define CPU_H
#include "Screen.h"
#include <raylib.h>
namespace Pong {
class CPU {
private:
  int Width = 25;
  int Height = 120;
  int CPUX = 0;
  int CPUY = 0;
  Color Kolor = {255, 255, 255, 255};

public:
  CPU(const ScreenSize &Screen)
      : CPUX(Screen.GetWidth() - (Width + 10)),
        CPUY(Screen.GetHeight() / 2 - (Height / 2)) {}
  int GetX() const { return CPUX; }
  int GetY() const { return CPUY; }
  void Draw();
};
} // namespace Pong
#endif
