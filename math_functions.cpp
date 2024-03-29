//
// Created by Lucas Alblas on 27/10/2019.
//

#include "math.hpp"

int fibonacci(int amount, int first = 0, int second = 1) {
	if (amount > 0) {
		std::cout << first << " ";
		int temp = first + second;
		first = second;
		second = temp;
		amount = amount - 1;
		fibonacci(amount, first, second);
	} else {
		std::cout << second << std::endl;
		return 0;
	}
	return 0;
}


int factorial(int amount, int total = 1, int start = 1) {
	if(amount > 0) {
		total = total * start;
		std::cout << total << " ";
		factorial(amount - 1, total, ++start);
	} else {
		std::cout << total;
		return total;
	}
	return 0;
}
