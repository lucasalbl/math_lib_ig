//
// Created by Lucas Alblas on 27/10/2019.
//

#include "math.hpp"
#include "basicincludes.hpp"

Vector2D::Vector2D(float a, float b){
	x = a;
	y = b;
}

Vector2D::Vector2D(double a, double b){
	x = a;
	y = b;
}

std::ostream& operator<<(std::ostream &os, Vector2D const &v) {
	return os << '{' << v.x << ',' << v.y << '}';
}
