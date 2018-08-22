#include "ClassTest.hpp"
#include <iostream>
#include <vector>

int main(){

  ClassTest test;
  std::vector<double> v {5.0,10.0};
  printf("Sum of v = %.5e\n",test.sum(v));

  return 0;
}
