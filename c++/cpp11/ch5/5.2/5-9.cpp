#include <iostream>
#include <memory>

using namespace std;

void Check(weak_ptr<int>& wp) {
  shared_ptr<int> sp = wp.lock();  // 装换成shared_ptr
  if (sp != nullptr) {
    cout << "still " << *sp << endl;
  } else {
    cout << "pointer is invalaid." << endl;
  }
}

int main() {
  shared_ptr<int> sp1(new int(22));
  shared_ptr<int> sp2 = sp1;

  weak_ptr<int> wp = sp1;  // 指向shared_ptr指向的对象

  cout << *sp1 << endl;
  cout << *sp2 << endl;
  Check(wp);

  sp1.reset();
  cout << *sp2 << endl;
  Check(wp);

  sp2.reset();
  Check(wp);
}