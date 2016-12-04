/*
 * structures.hpp
 *
 *  Created on: 04.12.2016
 *      Author: Tobias
 */

#ifndef STRUCTURES_HPP_
#define STRUCTURES_HPP_


#include <vector>

struct coordinate {
	double x;
	double y;
};


struct individual {
	std::vector<coordinate> layout;
	double fitness;
};


#endif /* STRUCTURES_HPP_ */
