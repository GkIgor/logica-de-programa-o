#include <iostream>
#include <string>
#include "Array.cpp"

int main()
{
  Array<int> *arr = new Array<int>(10); // Instancia de um Array Javascript
  arr->fill(5);                         // Preenche o Array com numero 5
  arr->add(777, arr->getSize() - 1);    // Adiciona 777 no ultimo elemento do Array
  arr->push(0);                         // Adiciona 0 no final do Array
  arr->unshift(0);                      // Adiciona 0 no inicio do Array

  for (int i = 0; i < arr->getSize(); i++) // Percorre o Array
  {
    int val = arr->get()[i]; // Pega o valor da posicao i do Array

    std::string result = std::to_string(i) + ": " + std::to_string(val); // Transforma o valor em string

    std::cout << result << std::endl; // Imprime o valor da posicao i do Array no terminal
  }
  std::cout << std::endl; // Pula uma linha no terminal, para melhorar a legibilidade

  // arr->remove(0);
  // arr->pop();
  // arr->shift(10);
  // arr->unshift(10);
  // arr->slice(0, 10);
  return 0;
}
