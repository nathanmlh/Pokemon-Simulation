#include "Bulbasaur.h"

CBulbasaur::CBulbasaur()
{
	SetName("Bulbasaur");
	SetBaseStats(5, 45, 49, 49, 65, 65, 45);
}

CBulbasaur::CBulbasaur(std::string name) : CPokemon(name)
{
	SetBaseStats(5, 45, 49, 49, 65, 65, 45);
}
