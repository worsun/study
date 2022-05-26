#include <iostream>
using namespace std;

template <typename First, typename... Rest>
struct Sum {
  enum { value = Sum<First>::value + Sum<Rest...>::value };
};

template <typename Last>
struct Sum<Last> {
  enum { value = sizeof(Last) };
};

int main() { cout << Sum<int, double, float>::value << endl; }