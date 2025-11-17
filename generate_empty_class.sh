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
  $CLASS_NAME();
  ~$CLASS_NAME();

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

// Destructor
$CLASS_NAME::~$CLASS_NAME()
{
  std::cout << "$CLASS_NAME destructor called" << std::endl;
}
EOF

echo "Created $HPP_FILE and $CPP_FILE for class $CLASS_NAME"