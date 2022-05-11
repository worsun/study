#include <iostream>

using namespace std;

enum Type { General, Light, Medium, Heavy };

// enum Category { General, Pistol, MachineGun, Cannon };
enum Category { Pistol, MachineGun, Cannon };

struct Killer {
  Killer(Type t, Category c) : type(t), catetory(c) {}
  Type type;
  Category catetory;
};

int main() {
  Killer cool(General, MachineGun);

  if (cool.type >= Pistol) {
    cout << "It is not a pistol" << endl;
  }

  cout << is_pod<Type>::value << endl;
  cout << is_pod<Category>::value << endl;
  return 0;
}