#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>
# include "Data.hpp"

class Serializer
{
  private:
    Serializer();
    Serializer(const Serializer& og);
    Serializer& operator=(const Serializer& og);
    ~Serializer();

  public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif
