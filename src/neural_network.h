#include "layer.h"
#include <memory>
#include <vector>

class NeuralNetwork {
public:
  void AddLayer(std::unique_ptr<Layer> layer);
  std::vector<float> ForwardPass(const std::vector<float>& input) const;
private:
  std::vector<std::unique_ptr<Layer>> layers_;
};