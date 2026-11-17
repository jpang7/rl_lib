#include "activation.h"
#include "dense_layer.h"
#include <memory>
#include <iostream>

int main() {
  std::vector<float> input(8, 1.0f);
  std::vector<std::unique_ptr<Layer>> layers;
  layers.emplace_back(std::make_unique<DenseLayer>(8,16));
  layers.emplace_back(std::make_unique<Relu>());
  for (const auto& layer : layers) {
    input = layer -> forward(input);
    for (float elt : input) {
      std::cout << elt << ' ';
    }
    std::cout << '\n';
  }
  return 0;
}