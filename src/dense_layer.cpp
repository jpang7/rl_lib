#include <cassert>
#include "dense_layer.h"

std::vector<float> DenseLayer::infer(const std::vector<float>& input) const {
  assert(input.size() == input_size_);
  std::vector<float> output(output_size_);
  for (int j = 0; j < output_size_; ++j) {
    float output_j = 0;
    for (int i = 0; i < input_size_; ++i) {
      output_j += weights_[j * input_size_ + i] * input[i];
    }
    output[j] = output_j + biases_[j];
  }
  return output;
}
