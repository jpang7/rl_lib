#include "dense_layer.h"
#include <iostream>

int main() {
  DenseLayer dense_layer(8,16);
  dense_layer.log_weights();
  return 0;
}