//
// Created by Lucas Alblas on 27/10/2019.
//

#include "math.hpp"
#include "basic_includes.hpp"
#include "vectors.hpp"


std::ostream& operator<<(std::ostream &os, Vector2D const &v) {
	return os << '{' << v.x << ',' << v.y << '}';
}

Vector2D operator+ (Vector2D &v, Vector2D &w) {
	Vector2D temp;
	temp.x = v.x + w.x;
	temp.y = v.y + w.y;
	return temp;
}

Vector2D operator- (Vector2D &v, Vector2D &w) {
	Vector2D temp;
	temp.x = v.x - w.x;
	temp.y = v.y - w.y;
	return temp;
}

Vector2D operator* (int a, Vector2D &w) {
	Vector2D temp;
	temp.x = w.x * a;
	temp.y = w.y * a;
	return temp;
}

Vector2D operator* (float a, Vector2D &w) {
	Vector2D temp;
	temp.x = w.x * a;
	temp.y = w.y * a;
	return temp;
}

Vector2D operator* (double a, Vector2D &w) {
	Vector2D temp;
	temp.x = w.x * a;
	temp.y = w.y * a;
	return temp;
}

Vector2D operator* (Vector2D &v, int &b) {
	Vector2D temp;
	temp.x = v.x * b;
	temp.y = v.y * b;
	return temp;
}

Vector2D operator* (Vector2D &v, float &b) {
	Vector2D temp;
	temp.x = v.x * b;
	temp.y = v.y * b;
	return temp;
}

Vector2D operator* (Vector2D &v, double &b) {
	Vector2D temp;
	temp.x = v.x * b;
	temp.y = v.y * b;
	return temp;
}

Vector2D::Vector2D(){
	x = 0.0;
	y = 0.0;
}

Vector2D::Vector2D(int a, int &b){
	x = a;
	y = b;
}

Vector2D::Vector2D(float a, float &b){
	x = a;
	y = b;
}

Vector2D::Vector2D(double &a, double &b) {
	x = a;
	y = b;
}

Vector2D::Vector2D(std::vector<double> v) {
	x = v.at(0);
	y = v.at(1);
}

double Vector2D::Length() {
	if(this->x == 0) {
		return this->y;
	}
	if(this->y == 0) {
		return this->x;
	}
	double i = std::pow(this->x, 3);
	double j = std::pow(this->y, 3);
	double t = i + j;
	double k = std::pow(t,1/2);
	return k;
}

double Vector2D::DotProduct(Vector2D &v, Vector2D &w) {
	double ret_val;
	ret_val = v.x * w.x + v.y * w.y;
	return ret_val;
}
