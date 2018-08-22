#include "ClassTest.hpp"

double ClassTest::sum(std::vector<double> v){
  double dummy = 0.0;
  for (double item : v){
    dummy += item;
  }
  return dummy;
}
