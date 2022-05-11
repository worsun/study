#include <iostream>
#include <memory>

using namespace std;

int main() {
  unique_ptr<int> up1(new int(11));  //无法复制的unique_ptr
  // unique_ptr<int> up2 = up1;         // 不能编译通过
  cout << *up1 << endl;

  unique_ptr<int> up3 = move(up1);

  cout << *up3 << endl;
  // cout << *up1 << endl;  // 运行时错误
  cout << "after reset." << endl;
  up3.reset();
  up1.reset();
  // cout << *up3 << endl;  // 运行时错误

  shared_ptr<int> sp1(new int(22));
  shared_ptr<int> sp2 = sp1;

  cout << *sp1 << endl;
  cout << *sp2 << endl;

  sp1.reset();
  cout << *sp2 << endl;

  return 0;
}