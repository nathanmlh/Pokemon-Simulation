#include "Bulbasaur.h"
#include "Tackle.h"

using namespace std;

CBulbasaur::CBulbasaur()
{
	SetName("Bulbasaur");
	SetBaseStats(5, 45, 49, 49, 65, 65, 45);
	AddAbility(make_shared<CTackle>());
}

CBulbasaur::CBulbasaur(std::string name) : CPokemon(name)
{
	SetBaseStats(5, 45, 49, 49, 65, 65, 45);
	AddAbility(make_shared<CTackle>());
}
