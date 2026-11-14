#include <iostream>

int main() {
  int number = 0;
  std::cin >> number;
  while(!std::cin.fail()){
    std::cout << ++number << "\n";
    std::cout.flush();
    std::cin >> number;
  }
  return 0;
}