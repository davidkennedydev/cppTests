#include <map>
#include <string>
#include <list>
#include <iostream>

main() {
	std::map<std::string, std::list<int>> mapTest;
	mapTest["primeiro"].push_back(5);
	mapTest["segundo"].push_back(2);
	mapTest["primeiro"].push_back(8);
	mapTest["primeiro"].push_back(5);

	for (auto element : mapTest["primeiro"])
		std::cout << element << std::endl;
}
