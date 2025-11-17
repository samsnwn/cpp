#include "Harl.hpp"

Harl::Harl() 
{
	_funcPtrs[0] = &Harl::debug;
	_funcPtrs[1] = &Harl::info;
	_funcPtrs[2] = &Harl::warning;
	_funcPtrs[3] = &Harl::error;

	_levels[0] = "DEBUG";
	_levels[1] = "INFO";
	_levels[2] = "WARNING";
	_levels[3] = "ERROR";
}

Harl::~Harl() {}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	for (int i = 0; i < (int)_levels->size() - 1; i++)
	{
		if (_levels[i] == level)
		{
			(this->*_funcPtrs[i])();
			return ;
		}
	}
	std::cout << "I dont´t speak your language." << std::endl;
}