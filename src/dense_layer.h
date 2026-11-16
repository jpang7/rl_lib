#include <vector>

class DenseLayer {
public:
  DenseLayer(int input_size, int output_size)
      : input_size_(input_size),
        output_size_(output_size),
        weights_(input_size * output_size),
        biases_(output_size) {}
  const std::vector<float> infer(const std::vector<float> &input);

private:
  int input_size_;
  int output_size_;
  std::vector<float> weights_;
  std::vector<float> biases_;
};
