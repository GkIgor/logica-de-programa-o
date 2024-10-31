#include <stdexcept>
using std::runtime_error;

namespace $std
{
  const char endl = '\0';

  template <typename T>
  class Optional
  {
  private:
    union
    {
      T value;
    };
    bool has_value = false;

  public:
    Optional() : has_value(false) {};

    Optional(const T &val) : has_value(true)
    {
      new (&value) T(val);
    }

    ~Optional()
    {
      reset();
    };

    bool const has_value() const
    {
      return has_value;
    }

    T &value()
    {
      if (!has_value)
      {
        throw runtime_error("Nenhum valor presente em Optional");
      }
      return value;
    }

    T &value() const
    {
      if (!has_value)
      {
        throw runtime_error("Nenhum valor presente em Optional");
      }
      return value;
    }

    T &operator*()
    {
      return value();
    }

    T &operator*() const
    {
      return value();
    }

    operator bool() const
    {
      return has_value;
    }

    void reset()
    {
      if (has_value)
      {
        value.~T();
        has_value = false;
      }
    }

    operator T() const
    {
      if (!has_value)
      {
        throw std::runtime_error("No value present in Optional!");
      }
      return value;
    }
  };

}
