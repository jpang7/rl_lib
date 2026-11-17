#include "activation.h"
#include "dense_layer.h"
#include <iostream>

int main() {
  DenseLayer dense_layer(8,16);
  // dense_layer.log_weights();
  std::vector<float> input(8, 1.0f);
  auto inference = dense_layer.infer(input);
  for (float elt : inference) {
    std::cout << elt << ' ';
  }
  std::cout << '\n';
  relu(inference);
  for (float elt : inference) {
    std::cout << elt << ' ';
  }
  std::cout << '\n';
  return 0;
}