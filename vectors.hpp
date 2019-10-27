#include "basic_includes.hpp"
//
// Created by Lucas Alblas on 27/10/2019.
//

#ifndef MAIN_VECTORS_HPP
#define MAIN_VECTORS_HPP


class Vector2D {
	friend std::ostream& operator<<(std::ostream &os, Vector2D const &v);
public:
	double x = 0,y = 0;
	Vector2D(float, float);
	Vector2D(double, double);
};


#endif //MAIN_VECTORS_HPP
