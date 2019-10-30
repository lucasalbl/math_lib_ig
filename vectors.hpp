#include "basic_includes.hpp"
//
// Created by Lucas Alblas on 27/10/2019.
//

#ifndef MAIN_VECTORS_HPP
#define MAIN_VECTORS_HPP


class Vector2D {
	friend std::ostream& operator<<(std::ostream &os, Vector2D const &v);
	friend Vector2D operator* (int a, Vector2D &w);
	friend Vector2D operator* (float a, Vector2D &w);
	friend Vector2D operator* (double a, Vector2D &w);
	friend Vector2D operator* (Vector2D &v, int &b);
	friend Vector2D operator* (Vector2D &v, float &b);
	friend Vector2D operator* (Vector2D &v, double &b);
	friend Vector2D operator+ (Vector2D &v, Vector2D &w);
	friend Vector2D operator- (Vector2D &v, Vector2D &w);


public:
	double x = 0,y = 0;
	Vector2D();
	Vector2D(int a, int &b);
	Vector2D(float a, float &b);
	Vector2D(double &a, double &b);
	explicit Vector2D(std::vector<double> v);
	static double DotProduct(Vector2D &v, Vector2D &w);

};


#endif //MAIN_VECTORS_HPP
