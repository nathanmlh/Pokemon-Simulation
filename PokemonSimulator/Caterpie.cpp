#include "Caterpie.h"

CCaterpie::CCaterpie()
{
	SetName(L"Caterpie");
	SetBaseStats(5, 45, 30, 35, 20, 20, 45);
}

CCaterpie::CCaterpie(std::wstring name) : CPokemon(name)
{
	SetBaseStats(5, 45, 30, 35, 20, 20, 45);
}
