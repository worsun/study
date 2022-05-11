#include <iostream>
using namespace std;

enum class Type { General, Light, Medium, Heavy };
enum class Category { General = 1, Pistol, MachineGun, Cannon };

int main() {
  Type t = Type::Light;
  // t = General; // 编译失败，必须使用强类型

  // 编译失败，必须使用Type中的Genaral
  // if (t == Category::General) {
  //   cout << "Genaral Weapon" << endl;
  // }

  if (t > Type::General) {
    cout << "not Genaral Weapon" << endl;
  }

  // 编译失败，无法转成int类型
  // if (t > 0) {
  //   cout << "not Genaral Weapon" << endl;
  // }

  if ((int)t > 0) {
    cout << "not Genaral Weapon" << endl;
  }

  cout << is_pod<Type>::value << endl;
  cout << is_pod<Category>::value << endl;

  return 0;
}