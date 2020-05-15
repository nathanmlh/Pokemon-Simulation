#include "Trainer.h"

#include <string>
#include <iostream>

using namespace std;

CTrainer::CTrainer()
{
	mName = "Red";
}

CTrainer::CTrainer(string name)
{
	mName = name;
}

void CTrainer::OutputPokemon()
{
	for (auto pokemon : mParty)
	{
		pokemon->OutputStats();
	}
}

void CTrainer::AddPokemon(std::shared_ptr<CPokemon> pokemon)
{
	if (mParty.size() < 6)
	{
		mParty.push_back(pokemon);
	}
	else
	{
		cout << "Too many pokemon in party! (Only 6 allowed)" << endl;
	}
}
