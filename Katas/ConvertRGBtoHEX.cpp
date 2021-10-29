#include <iostream>
class RGBToHex
{
public:
  static std::string rgb(int r, int g, int b)
  {
    char hexColor[7];
    std::snprintf(hexColor, sizeof hexColor, "%02X%02X%02X", r, g, b);
    return hexColor;
  }
};