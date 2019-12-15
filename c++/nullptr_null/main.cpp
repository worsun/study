#include <iostream>
#include <string>
using namespace std;

void func(int *num) {
    cout << "this is the ptr function..." << endl;
}

void func(int num) {
    cout << "this is the normal function..." << endl;
}

int main(){
    func(NULL);
}
