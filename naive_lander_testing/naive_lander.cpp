#include <cstdlib>
#include <iostream>

int main() {
  std::string observation;
  std::getline(std::cin, observation);
  while(!std::cin.fail()){
    int action = rand() % 4;
    std::cout << action << "\n";
    std::cout.flush();
    std::getline(std::cin, observation);
  }
  return 0;
}