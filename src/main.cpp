#include "Ball.h"
#include "CPU.h"
#include "Player.h"
#include "Screen.h"
#include <raylib.h>

int main() {
  Pong::ScreenSize Screen;
  Pong::Ball Ball(Screen);
  Pong::Player Player(Screen);
  Pong::CPU CPU(Screen);
  Screen.Window();
  while (WindowShouldClose() == false) {
    // Event //
    Player.Control(Ball);
    // Update //
    Ball.Move();
    CPU.AIControl(Ball);
    //  Draw //
    BeginDrawing();
    ClearBackground(Color{0, 0, 0, 255});
    Player.Draw();
    CPU.Draw();
    Ball.Draw();
    Screen.MidLine();
    EndDrawing();
  }
  CloseWindow();
  return 0;
}
