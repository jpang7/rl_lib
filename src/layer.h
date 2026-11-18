#pragma once
#include <vector>

class Layer {
public:
  virtual ~Layer() = default;
  virtual std::vector<float> Forward(const std::vector<float>& input) const = 0;
};
