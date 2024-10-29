#include <iostream> // Biblioteca de entrada e saida
#include "strings.cpp" // Arquivo com o namespace $strings

using $strings::size; // Importa a funcionalidade de $strings::size
using $strings::toUppercase; // Importa a funcionalidade de $strings::toUppercase
using std::cout; // Importa a funcionalidade de std::cout
using std::endl; // Importa a funcionalidade de std::endl

int main(int argc, char const *argv[]) // Entrypoint do programa
{

  for (int i = 1; i <= argc - 1; i++) // Percorre os argumentos da linha de comando
  {
    cout << toUppercase( (char *)argv[i] /* Cast argv[i] para char */ ) << endl; // Imprime a string em maiúsculo
  }

  return 0;
}
