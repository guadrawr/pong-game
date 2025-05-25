#ifndef SCREEN_H
#define SCREEN_H
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
  void InitWindow() const;
};
} // namespace Pong
#endif
