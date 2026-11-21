#include <array>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

#include "activation.h"
#include "dense_layer.h"
#include "neural_network.h"

bool getObservations(std::vector<float>& observations) {
  std::string input_observation;
  std::getline(std::cin, input_observation);
  if (std::cin.fail()) {
    return false;
  }
  if (observations.size() != 8) {
    return false;
  }
  std::istringstream input_stream(input_observation);
  for (int i=0; i<8; ++i) {
    if (!(input_stream >> observations[i])) {
      return false;
    }
  }
  return true;
}

int main() {
  std::vector<float> observations(8, 1.0f);
  NeuralNetwork nn;
  nn.AddLayer(std::make_unique<DenseLayer>(8,16));
  nn.AddLayer(std::make_unique<Relu>());
  nn.AddLayer(std::make_unique<DenseLayer>(16,4));
  while(getObservations(observations)){
    std::vector<float> output = nn.ForwardPass(observations);
    // for (float x : observations) {
    //   std::cerr << x << ' ';
    // }
    // std::cerr << '\n';
    if (output.size() != 4) {
      return 1;
    }
    int argmax = 0;
    float max_output = output[0];
    for (int i = 1; i < 4; ++i) {
      if (output[i] > max_output) {
        max_output = output[i];
        argmax = i;
      }
    }
    std::cout << argmax << "\n";
    std::cout.flush();
  }

  return 0;
}