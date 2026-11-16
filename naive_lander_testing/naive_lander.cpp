#include <array>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

bool getObservations(std::array<float, 8>& observations) {
  std::string input_observation;
  std::getline(std::cin, input_observation);
  if (std::cin.fail()) {
    return false;
  }
  std::istringstream input_stream(input_observation);
  for (int i=0; i<8; ++i) {
    if (!(input_stream >> observations[i])) {
      return false;
    }
  }
  return true;
}

int main() {
  std::array<float, 8> observations{};
  while(getObservations(observations)){
    for (float x : observations) {
      std::cerr << x << ' ';
    }
    std::cerr << '\n';
    int action = rand() % 4;
    std::cout << action << "\n";
    std::cout.flush();
  }
  return 0;
}