#include "math.hpp"
#include "basicincludes.hpp"

int Fibonacci(int amount,int first = 0, int second = 1) {
	if (amount > 0) {
		std::cout << first << " ";
		int temp = first + second;
		first = second;
		second = temp;
		amount = amount - 1;
		Fibonacci(amount, first, second);
} else {
std::cout << second << std::endl;
return 0;
	}
	return 0;
}


int Factorial(int amount, int total = 1, int start = 1) {
	if(amount > 0) {
		total = total * start;
		std::cout << total << " ";
		Factorial(amount - 1, total, ++start);
	} else {
		std::cout << total;
		return total;
	}
	return 0;
}

int main() {
	float a,b;
	std::cin >> a >> b;
	Vector2D v = {a,b};
	double c,d;
	std::cin >> c >> d;
	Vector2D w = {a,b};
	std::cout << v << ", " << w;
	return 0;
}