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

void CPokemon::SetBaseStats(int hp, int atk, int defense, int spAtk, int spDef, int speed)
{
	mMaxHealthPoints = hp;
	mCurrentHealthPoints = mMaxHealthPoints;
	mAttack = atk;
	mDefense = defense;
	mSpecialAttack = spAtk;
	mSpecialDefense = spDef;
	mSpeed = speed;
}

void CPokemon::OutputStats()
{
	wcout << "---- " << mName << " stats ----" << endl;
	cout << "[HP]        : " << mCurrentHealthPoints << "/" << mMaxHealthPoints << endl;
	cout << "[Attack]    : " << mAttack << endl;
	cout << "[Defense]   : " << mDefense << endl;
	cout << "[SpAttack]  : " << mSpecialAttack << endl;
	cout << "[SpDefense] : " << mSpecialDefense << endl;
	cout << "[Speed]     : " << mSpeed << endl;
}
