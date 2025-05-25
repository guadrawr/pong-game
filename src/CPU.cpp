#include "CPU.h"
#include <raylib.h>
#pragma
namespace Pong {
void CPU::Draw() { DrawRectangle(CPUX, CPUY, Width, Height, Kolor); }
} // namespace Pong
