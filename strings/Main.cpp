#include <iostream>
#include "strings.cpp"

using $strings::toUppercase;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{

  char alfabeto[] = "abcdefghijklmnopqrstuvwxyz";

  char alfabeto2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  cout << toUppercase(alfabeto) << "" << endl;

  // for (int i = 0; i < 26; i++)
  // {
  //   cout << alfabeto[i] << ": " << (alfabeto[i] - '0') << ": " << alfabeto2[i] << ": " << (alfabeto2[i] - '0') << endl;
  // }

  // cout << endl;
  // cout << (char)43 << endl;

  return 0;
}
