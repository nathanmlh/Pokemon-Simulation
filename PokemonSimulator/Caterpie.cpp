#include "Caterpie.h"

CCaterpie::CCaterpie()
{
	SetName("Caterpie");
	SetBaseStats(5, 45, 30, 35, 20, 20, 45);
}

CCaterpie::CCaterpie(std::string name) : CPokemon(name)
{
	SetBaseStats(5, 45, 30, 35, 20, 20, 45);
}
