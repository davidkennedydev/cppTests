#include <iostream>

unsigned long long int operator"" _seconds(unsigned long long int seconds) {
	return seconds * 1000;
}

main() {
	std::cout << 5_seconds << std::endl;
}
