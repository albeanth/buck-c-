#include <iostream>
#include <vector>

double sum(std::vector<double> v){
  double dummy = 0.0;
  for (double item : v){
    dummy += item;
  }
  return dummy;
}

int main(){

  std::vector<double> v {5.0,10.0};
  double out = sum(v);
  printf("Sum of v = %.5e\n",out);

  return 0;
}
