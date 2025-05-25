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
  Screen.InitWindow();
  while (WindowShouldClose() == false) {

    // Event //

    // Update //

    // Draw //
    BeginDrawing();
    ClearBackground(Color{0, 0, 0, 255});
    Ball.Draw();
    Player.Draw();
    CPU.Draw();
    EndDrawing();
  }
  CloseWindow();
  return 0;
}
