#include "neural_network.h"
#include <utility>

void NeuralNetwork::AddLayer(std::unique_ptr<Layer> layer) {
  layers_.emplace_back(std::move(layer));
}

std::vector<float> NeuralNetwork::ForwardPass(
  const std::vector<float>& input)const {
  std::vector<float> output = input;
  for (const auto& layer : layers_) {
    output = layer->Forward(output);
  }
  return output;
}
