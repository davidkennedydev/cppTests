#include <iostream>

namespace Test {
	using Time = unsigned long long int;
}

constexpr Test::Time operator"" _seconds(const unsigned long long int seconds) {
	return seconds * 1000;
}

main() {
	std::cout << 5_seconds << std::endl;
}
