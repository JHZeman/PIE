#ifndef INPUT_H
#define INPUT_H

#include <SFML/Window.hpp>
#include "mpcsolver.h"


class Input
{
private:
	MPCSolver* mpcSolver;
	
public:
	Input(MPCSolver* mpcSolver);
	MPCSolver* getMPCSolver();
	void test();
};

#endif // INPUT_H
