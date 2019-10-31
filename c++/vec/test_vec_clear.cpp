#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	vector<int> test;
	cout << test.size() << endl;
	for (int i = 0; i < 100; ++i) {
		test.push_back(i);
	}
	cout << test.size() << endl;
	test.clear();
	cout << test.size() << endl;
	for (int i = 0; i < 10; ++i) {
                test.push_back(i);
        }
	cout << test.size() << endl;
	test.clear();
        cout << test.size() << endl;
	return 0;
}
