template <typename T>
class Array
{

private:
  int size;
  T *arr;

public:
  Array(int size)
  {
    this->size = size;
    this->arr = new T[size];
  }

  T *get() const
  {
    return arr;
  }

  int getSize() const
  {
    return size;
  }

  void fill(T data)
  {
    for (int i = 0; i < size; i++)
    {
      arr[i] = data;
    }
  }

  void add(T data, int index)
  {
    if (index >= size)
    {
      return;
    }
    arr[index] = data;
  }

  void remove(int index)
  {
    if (index >= size)
    {
      return;
    }
    for (int i = index; i < size - 1; i++)
    {
      arr[i] = arr[i + 1];
    }
    size--;
  }

  void push(T data)
  {
    T *temp = new T[size + 1];
    for (int i = 0; i < size; i++)
    {
      temp[i] = arr[i];
    }

    temp[size] = data;
    delete[] arr;
    arr = temp;
    size++;
  }

  void shift(T data)
  {
    T *temp = new T[size + 1];
    temp[0] = data;
    for (int i = 0; i < size; i++)
    {
      temp[i + 1] = arr[i];
    }
    delete[] arr;
    arr = temp;
    size++;
  }

  void unshift(T data)
  {
    T *temp = new T[size + 1];
    for (int i = 0; i < size; i++)
    {
      temp[i + 1] = arr[i];
    }
    temp[0] = data;
    delete[] arr;
    arr = temp;
    size++;
  }

  T *slice(int start, int end)
  {
    T *temp = new T[end - start];
    for (int i = start; i < end; i++)
    {
      temp[i - start] = arr[i];
    }
    return temp;
  }

  void pop()
  {
    T data = arr[size - 1];
    T *temp = new T[size - 1];
    for (int i = 0; i < size - 1; i++)
    {
      temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
    size--;
  }
};