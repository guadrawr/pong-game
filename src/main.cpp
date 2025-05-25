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

    // Update //
    Ball.Move();
    Player.Control();
    // Draw //
    BeginDrawing();
    ClearBackground(Color{0, 0, 0, 255});
    Ball.Draw();
    Player.Draw();
    CPU.Draw();
    Screen.MidLine();
    EndDrawing();
  }
  CloseWindow();
  return 0;
}
