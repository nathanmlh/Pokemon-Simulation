/**
 * \file Pokemon.cpp
 *
 * \author Nathan Holdom
 */

#include "Pokemon.h"

#include <iostream>

using namespace std;

CPokemon::CPokemon()
{
}

CPokemon::CPokemon(std::wstring name)
{
	mName = name;
}

void CPokemon::AddAbility(std::shared_ptr<CAbility> ability)
{
	// Checks if we have space enough to have another ability
	if (mAbilities.size() >= 4)
	{
		// TODO: Add ability to remove moves if trying to learn a move
		cout << "Cannot add a move right now.";
	}
	else
	{
		mAbilities.push_back(ability);
	}
}
