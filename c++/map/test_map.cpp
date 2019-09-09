#include <iostream>
#include <map>
#include <string>

int main(){
	std::map<char, std::string> mymap;
	mymap['a'] = "an element";
	std::cout << "mymap[a] is " << mymap['a'] << std::endl;
	std::cout << "mymap[b] is " << mymap['b'] << std::endl;
	if (mymap.find('c') != mymap.end()){
		std::cout<< "mymap has key ‘c’"<< std::endl;
	}
}
