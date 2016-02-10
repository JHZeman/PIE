
#include"input.h"
#include<iostream>
#include<SFML/Window.hpp>

// Connstructor
Input::Input(MPCSolver* mpcSolver)
{
	this->mpcSolver = mpcSolver;
}

MPCSolver* Input::getMPCSolver()
{
	return this->mpcSolver;
}


void Input::test()
{
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		// left key is pressed: move our character
		std::cout << "========="<< std::endl;
		std::cout << "Moving left" << std::endl;
		std::cout << "========="<< std::endl;
		std::array<double,3> consigne = {0,-20,0};
		(this->mpcSolver)->setConsigne(consigne);
	}
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		std::cout << "========="<< std::endl;
		std::cout << "Moving right" << std::endl;
		std::cout << "========="<< std::endl;
		std::array<double,3> consigne = {0,20,0};
		(this->mpcSolver)->setConsigne(consigne);

	}
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		std::cout << "========="<< std::endl;					
		std::cout << "Moving forward" << std::endl;
		std::cout << "========="<< std::endl;
		std::array<double,3> consigne = {20,0,0};
		(this->mpcSolver)->setConsigne(consigne);
	}
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		std::cout << "========="<< std::endl;
		std::cout << "Moving backward" << std::endl;
		std::cout << "========="<< std::endl;
		std::array<double,3> consigne = {-20,0,0};
		(this->mpcSolver)->setConsigne(consigne);
	}
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		std::cout << "========="<< std::endl;
		std::cout << "Moving upward" << std::endl;
		std::cout << "========="<< std::endl;
		std::array<double,3> consigne = {0,0,20};
		(this->mpcSolver)->setConsigne(consigne);
	}
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::R))
	{
		std::cout << "========="<< std::endl;
		std::cout << "Moving downward" << std::endl;
		std::cout << "========="<< std::endl;
		std::array<double,3> consigne = {0,0,-20};
		(this->mpcSolver)->setConsigne(consigne);
	}
}
















