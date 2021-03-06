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

CPokemon::CPokemon(std::string name)
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

void CPokemon::DoDamage(std::shared_ptr<CPokemon> enemyPokemon, int idx)
{
	int damage = CalculateDamage(enemyPokemon, mAbilities[idx]);
	enemyPokemon->TakeDamage(damage);
	cout << "Your " << mName << " did " << damage << " damage!" << endl;
	
}

int CPokemon::CalculateDamage(std::shared_ptr<CPokemon> enemyPokemon, std::shared_ptr<CAbility> ability)
{
	// Modifier = tagets * weather * badge * critical * random * stab * type * burn * other
	int modifier = 1;
	int damage = ((((2 * this->GetLevel() / 5) + 2) *
		ability->GetPower() * this->GetAttack() / enemyPokemon->mDefense) / 50 + 2)
		* modifier;

	return damage;
}

void CPokemon::SetBaseStats(int level, int hp, int atk, int defense, int spAtk, int spDef, int speed)
{
	mLevel = level;
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
	cout << "---- " << mName << " stats ----" << endl;
	cout << "[Level]     : " << mLevel << endl;
	cout << "[HP]        : " << mCurrentHealthPoints << "/" << mMaxHealthPoints << endl;
	cout << "[Attack]    : " << mAttack << endl;
	cout << "[Defense]   : " << mDefense << endl;
	cout << "[SpAttack]  : " << mSpecialAttack << endl;
	cout << "[SpDefense] : " << mSpecialDefense << endl;
	cout << "[Speed]     : " << mSpeed << endl;
}