
using std::runtime_error;

namespace $strings
{

  int size(char *input)
  {
    int size = 0;

    for (int i = 0; input[i] != '\0'; i++)
    {
      size++;
    }

    return size;
  }

  char *toUppercase(char palavra[])
  {
    if (palavra == nullptr)
    {
      throw runtime_error("NULL POINTER EXCEPTION IN $strings::toUppercase!");
    }

    int strSize = size(palavra) + 1;
    char *novaPalavra = new char[strSize];

    if (palavra[strSize - 1] != '\0')
      novaPalavra[strSize - 1] = '\0';

    for (int i = 0; i < strSize - 1; i++)
    {
      char letra = palavra[i];
      if (letra >= 'a' && letra <= 'z')
      {
        novaPalavra[i] = letra - ('a' - 'A');
      }
      else
      {
        novaPalavra[i] = letra;
      }
    }
    return novaPalavra;
  }

}