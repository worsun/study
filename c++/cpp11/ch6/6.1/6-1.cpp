
const int GetConst() { return 1; }

// const描述的都是一些“运行时常量性”的概念
int main() {
  int arr[GetConst()] = {0};     // 无法编译通过
  enum { e1 = GetConst(), e2 };  // 无法编译通过
  int cond = 1;
  switch (cond) {
    case GetConst():  // 无法编译通过
      break;

    default:
      break;
  }
}