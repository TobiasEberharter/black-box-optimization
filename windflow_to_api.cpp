//============================================================================
// Name        : windflow_to_api.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "initialization.hpp"
#include "structures.hpp"
#include <vector>
#include <stdlib.h>
#include <time.h>


int main() {
	srand(time(0));

	std::vector<individual> population;

	population = initialization::initialization_1(7000,14000,400,100);
	initialization::replace_violations(population,38.5,7000,14000);
	initialization::replace_violations(population,38.5,7000,14000);
	return 0;
}
