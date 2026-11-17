#include <cmath>
#include "layer.h"
#include <vector>

class Relu : public Layer {
  std::vector<float> forward(const std::vector<float>& input) const;
};