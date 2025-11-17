#!/bin/bash

if [ -z "$1" ]; then
  echo "Usage: $0 <ClassName>"
  exit 1
fi

CLASS_NAME=$1
HPP_FILE="${CLASS_NAME}.hpp"
CPP_FILE="${CLASS_NAME}.cpp"

# Create .hpp file
cat <<EOF > "$HPP_FILE"
#ifndef $(echo ${CLASS_NAME} | tr '[:lower:]' '[:upper:]')_HPP
# define $(echo ${CLASS_NAME} | tr '[:lower:]' '[:upper:]')_HPP

# include <iostream>

class $CLASS_NAME
{
public:
  $CLASS_NAME(); // Default constructor
  $CLASS_NAME(const $CLASS_NAME &other); // Copy constructor
  $CLASS_NAME &operator=(const $CLASS_NAME &other); // Assignment operator
  ~$CLASS_NAME(); // Destructor

private:

};

#endif
EOF

# Create .cpp file
cat <<EOF > "$CPP_FILE"
#include "$HPP_FILE"

// Default constructor
$CLASS_NAME::$CLASS_NAME()
{
  std::cout << "$CLASS_NAME default constructor called" << std::endl;
}

// Copy constructor
$CLASS_NAME::$CLASS_NAME(const $CLASS_NAME &other)
{
  std::cout << "$CLASS_NAME copy constructor called" << std::endl;
  *this = other; // Call assignment operator for deep copy if needed
}

// Assignment operator
$CLASS_NAME & $CLASS_NAME::operator=(const $CLASS_NAME &other)
{
  std::cout << "$CLASS_NAME assignment operator called" << std::endl;
  if (this != &other)
  {
    // Copy members from other to this
  }
  return *this;
}

// Destructor
$CLASS_NAME::~$CLASS_NAME()
{
  std::cout << "$CLASS_NAME destructor called" << std::endl;
}
EOF

echo "Created $HPP_FILE and $CPP_FILE for class $CLASS_NAME"