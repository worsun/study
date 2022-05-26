#include <iostream>
using namespace std;

int main() {
  std::size_t using_bytes_{};
  if (using_bytes_) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }

  cout << using_bytes_ << endl;
  return 0;
}
