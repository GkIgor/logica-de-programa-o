#include <iostream>
#include "standard.cpp"

using namespace $std;
using std::cout;

int main(int argc, char const *argv[])
{

  Optional<double> val = 0;


  if (val)
  {
    cout << val << endl;
  }

  return 0;
}
