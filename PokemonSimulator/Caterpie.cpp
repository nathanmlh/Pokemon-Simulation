#include "Caterpie.h"
#include "Tackle.h"

using namespace std;

CCaterpie::CCaterpie()
{
	SetName("Caterpie");
	SetBaseStats(5, 45, 30, 35, 20, 20, 45);
	AddAbility(make_shared<CTackle>());
}

CCaterpie::CCaterpie(std::string name) : CPokemon(name)
{
	SetBaseStats(5, 45, 30, 35, 20, 20, 45);
	AddAbility(make_shared<CTackle>());
}
