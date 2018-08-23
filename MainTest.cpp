#include <iostream>
#include <vector>
#include <TWIGL/ClassTest.hpp>

int main(){

  ClassTest test;
  std::vector<double> v;
  v.push_back(3.0); v.push_back(5.0);
  printf("Sum of v = %.5e\n",test.sum(v));

  return 0;
}
