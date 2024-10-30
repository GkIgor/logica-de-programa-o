#include <stdexcept>
#include "../strings/strings.cpp";

using $strings::size;
using std::runtime_error;

class Number
{
  static bool isNaN() { return false; }

  static int *tryParseInt(char number[])
  {
    int s = size(number);


    return new int;
  }
};