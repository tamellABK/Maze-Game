#include "ConfusionTrap.h"
#include <iostream>

void ConfusionTrap::Draw()
{
	if (!m_Sprung)
	{
		std::cout << " ";
	} 
	else
	{
		std::cout << "#";
	}
}

void ConfusionTrap::SpringTrap()
{
	m_Sprung = true;
}