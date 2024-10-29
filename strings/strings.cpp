
using std::runtime_error;

namespace $strings
{

  int size(char *input)
  {
    int size = 0;

    for (int i = 0; input[i] != '\0'; i++) // Percorre cada caracter da palavra
    {
      size++; // Incrementa o tamanho da palavra em +1 a cada loop
    }

    return size;
  }

  char *toUppercase(char palavra[]) // Transforma uma palavra em letras maiusculas
  {
    if (palavra == nullptr) // Verifica se a palavra é nula
    {
      throw runtime_error("NULL POINTER EXCEPTION IN $strings::toUppercase!"); // Para o programa
    }

    int strSize = size(palavra) + 1; // Calcula o tamanho da palavra
    char *novaPalavra = new char[strSize]; // Cria um novo array com o tamanho da palavra

    if (palavra[strSize - 1] != '\0') // Verifica se a palavra termina com um \0
    {
      novaPalavra[strSize - 1] = '\0'; // Coloca um \0 no final do array
    }

    for (int i = 0; i < strSize - 1; i++) // Percorre cada caracter da palavra
    {
      char letra = palavra[i]; // Pega o caracter

      if (letra >= 'a' && letra <= 'z') // Verifica se o caracter é minusculo
      {
        novaPalavra[i] = letra - ('a' - 'A'); // Transforma o caracter em maiusculo
      }
      else // Se o caracter nao for minusculo
      {
        novaPalavra[i] = letra; // Coloca o caracter no novo array
      }
    }
    return novaPalavra; // Retorna o novo array
  }
}