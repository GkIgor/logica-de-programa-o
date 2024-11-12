#include <vector>
#include <stdexcept>
#include <iostream>

using std::cout;
using std::runtime_error;
using std::vector;

/**
 *
 *
 *         [1 0 0]
 * Mat A = [0 0 0]
 *         [0 0 2]
 *
 *
 */

namespace mat
{
  bool mat_diagonal(vector<int> mat, int i, int j)
  {
    if (i != j)
      throw runtime_error("Matriz diagonal deve ser uma matriz quadrada!");

    bool mat_e_diagonal = false;

    for (int index = 0; index < i; index++)
    {
      for (int jIndex = 0; jIndex < j; jIndex++)
      {
        if (index == jIndex && mat[index * j + jIndex] != 0)
          mat_e_diagonal = true;
        else if (index != jIndex && mat[index * j + jIndex] != 0)
          mat_e_diagonal = false;
      }
    }

    return mat_e_diagonal;
  }

  int *criar_matriz(vector<int> mat, int i, int j)
  {

    int *mat_copia = new int[i * j];

    for (int index = 0; index < i; index++)
    {
      for (int jIndex = 0; jIndex < j; jIndex++)
      {
        mat_copia[index * j + jIndex] = mat[index * j + jIndex];
      }
    }

    return mat_copia;
  }
} // namespace mat

int main()
{

  return 0;
}