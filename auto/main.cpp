#include <iostream>
using namespace std;

template <typename T>
int sum(int x, T y) {
	return x + y;
}

main() {
	std::cout << sum(4,2) << std::endl;
	int i = 45;
	const auto ci = i;
	std::cout << ci << std::endl;
}
