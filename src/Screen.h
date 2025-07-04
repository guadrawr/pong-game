#ifndef SCREEN_H
#define SCREEN_H
#pragma once
namespace Pong {
class ScreenSize {
private:
  int Width;
  int Height;

public:
  ScreenSize(int width = 1280, int height = 800)
      : Width(width), Height(height) {}

  int GetWidth() const { return Width; }
  int GetHeight() const { return Height; }
  void Window() const;
  void MidLine() const;
};
} // namespace Pong
#endif
