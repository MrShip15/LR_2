// Copyright 2020 MrShip15 mr.shi15@gmail.ru

#include <iostream>
#include "cache_check.hpp"

int main(){
  cache_check a;
  a.countDirect();
  std::cout << a;
  a.countReverse();
  std::cout << a;
  a.countRandom();
  std::cout << a;
  return 0;
}
