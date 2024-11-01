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
      T _value;
    };
    bool _has_value = false;

  public:
    Optional() : _has_value(false) {};

    Optional(const T &val) : _has_value(true)
    {
      new (&_value) T(val);
    }

    ~Optional()
    {

      reset();
    };

    bool const has_value() const
    {
      return _has_value;
    }

    T &value()
    {
      if (!_has_value)
      {
        throw runtime_error("Nenhum valor presente em Optional");
      }
      return value;
    }

    T &value() const
    {
      if (!_has_value)
      {
        throw runtime_error("Nenhum valor presente em Optional");
      }
      return _value;
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
      return _has_value;
    }

    void reset()
    {
      if (_has_value)
      {
        _value.~T();
        _has_value = false;
      }
    }

    operator T() const
    {
      if (!_has_value)
      {
        throw std::runtime_error("No value present in Optional!");
      }
      return value;
    }

    friend std::ostream &operator<<(std::ostream &os, const Optional &opt)
    {
      if (opt._has_value)
      {
        os << opt._value;
      }
      else
      {
        os << "Nenhum valor presente";
      }
      return os;
    }
  };

}
