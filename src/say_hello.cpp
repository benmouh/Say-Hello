#include "say_hello.hpp"
#include <string>

namespace Hello {

	int Factorial(int number) {
		
		int res = 0;
		if (number == 1) res = 1;
		else if (number == 2) res = 2;
		else res = Factorial(number - 1) * number;
		return res;

	}
	std::string NativeSayHello(const std::string& str) {
		return "Hello " + str;
	}
}