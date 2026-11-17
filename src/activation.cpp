#include "activation.h"

std::vector<float> Relu::forward(const std::vector<float>& input) const {
  std::vector<float> output;
  for (float elt : input) {
    output.push_back(std::max(0.0f, elt));
  }
  return output;
}