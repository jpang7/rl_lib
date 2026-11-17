#include <cmath>
#include <iostream>
#include <random>
#include <vector>

class DenseLayer {
public:
  DenseLayer(int input_size, int output_size)
      : input_size_(input_size),
        output_size_(output_size),
        weights_(input_size * output_size),
        biases_(output_size) {
          // Initialize weights with random values
          std::random_device rd;
          std::mt19937 gen(rd());
          std::normal_distribution<float> d(0.0f, std::sqrt(2.0f/input_size));
          for (int i = 0; i < weights_.size(); ++i) {
            weights_[i] = d(gen);
          }
        }
  std::vector<float> infer(const std::vector<float> &input) const;
  void log_weights() {
    for (float weight : weights_) {
      std::cout << weight << ' ';
    }
    std::cout << '\n';
  }

private:
  int input_size_;
  int output_size_;
  std::vector<float> weights_;
  std::vector<float> biases_;
};

void relu(std::vector<float>& input);