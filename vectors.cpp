//
// Created by Lucas Alblas on 27/10/2019.
//

#include "math.hpp"
#include "basic_includes.hpp"

Vector2D::Vector2D(){
	x = 0.0;
	y = 0.0;
}

Vector2D::Vector2D(float a, float b){
	x = a;
	y = b;
}

Vector2D::Vector2D(double a, double b) {
	x = a;
	y = b;
}

std::ostream& operator<<(std::ostream &os, Vector2D const &v) {
	return os << '{' << v.x << ',' << v.y << '}';
}

double Vector2D::DotProduct(Vector2D v, Vector2D w) {
	double ret_val;
	ret_val = v.x*w.x + v.y*w.y;
	return ret_val;
}
