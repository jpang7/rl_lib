#include "activation.h"

void relu(std::vector<float>& input) {
  for (float& elt : input) {
    elt = std::max(0.0f, elt);
  }
}