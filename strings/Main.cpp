#include <iostream>
#include "strings.cpp"

using $strings::size;
using $strings::toUppercase;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{

  char alfabeto[] = "abcdefghijklmnopqrstuvwxyz";

  for (int i = 1; i <= argc - 1; i++)
  {

    cout << toUppercase((char *)argv[i]) << endl;
  }

  return 0;
}
