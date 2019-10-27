#include "math.hpp"
#include "basic_includes.hpp"


int main() {
	float a,b;
	std::cin >> a >> b;
	Vector2D v = {a,b};
	double c,d;
	std::cin >> c >> d;
	Vector2D w = {c,d};
	std::cout << v << ", " << w;
	return 0;
}