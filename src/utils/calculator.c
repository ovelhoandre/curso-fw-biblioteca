#include "utils/calculator.h"

int sum(int a, int b) {
  return a + b;
}

int multiply(int a, int b) {
  return a * b;
}

int power(int a, int exponent) {
  int result = a;
  while (exponent > 1) {
    result = result * a;
    exponent--;
  }
  return result;
}
