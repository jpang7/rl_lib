#pragma once
#include <vector>

class Layer {
public:
  virtual ~Layer() = default;
  virtual std::vector<float> forward(const std::vector<float>& input) const = 0;
};
