#include "activation.h"
#include "dense_layer.h"
#include "neural_network.h"
#include <memory>
#include <iostream>

int main() {
  std::vector<float> input(8, 1.0f);
  NeuralNetwork nn;
  nn.AddLayer(std::make_unique<DenseLayer>(8,16));
  nn.AddLayer(std::make_unique<Relu>());
  nn.AddLayer(std::make_unique<DenseLayer>(16,4));
  std::vector<float> output = nn.ForwardPass(input);
  for (float elt : output) {
    std::cout << elt << ' ';
  }
  std::cout << '\n';
  return 0;
}