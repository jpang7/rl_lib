#include <cmath>
#include "layer.h"
#include <vector>

class Relu : public Layer {
  std::vector<float> Forward(const std::vector<float>& input) const;
};