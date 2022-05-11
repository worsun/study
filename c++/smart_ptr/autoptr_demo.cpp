#include <memory>
#include <vector>

using namespace std;

int main(int argc, char const* argv[]) {
  std::auto_ptr<int> iptr(new int(1));
  std::vector<std::auto_ptr<int> > integer_vec;

  integer_vec.push_back(iptr);
  return 0;
}