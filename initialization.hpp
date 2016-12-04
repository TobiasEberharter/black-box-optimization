/*
 * initialization.hpp
 *
 *  Created on: 04.12.2016
 *      Author: Tobias
 */

#ifndef INITIALIZATION_HPP_
#define INITIALIZATION_HPP_

#include <vector>
#include "structures.hpp"
namespace initialization {
/* initialization_1
 *
 * This function takes  the relevant layout data as parameter and produces
 * a population / vector of those turbine layouts.
 * The returned layouts are completely random based and
 * will be corrected by the "replaceviolations" function
 *
 * !! srand(time(0)); needs to be in the main function !!
 *
 * parameters: int width, int height, int turbines, int pop_size
 * return: std::vector<individual> population
 *
 */
std::vector<individual> initialization_1(WindScenario wscenario,int pop_size);


/* replace_violations
 *
 * This functions takes a population reference and the layout
 * constraints as parameters, and automatically corrects
 * all turbine positions within the given population by new
 * random positions. No return value.
 * 
 * !! srand(time(0)); needs to be in the main function !!
 *
 * parameters: std::vector<individual> &population
 * 			   double radius, int width, int height
 *
 * return: void
 */
void replace_violations(std::vector<individual> &population,WindScenario wscenario);
}



#endif /* INITIALIZATION_HPP_ */
