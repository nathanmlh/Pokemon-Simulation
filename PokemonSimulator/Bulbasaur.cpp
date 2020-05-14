#include "Bulbasaur.h"

CBulbasaur::CBulbasaur()
{
	SetName(L"Bulbasaur");
	SetBaseStats(45, 49, 49, 65, 65, 45);
}

CBulbasaur::CBulbasaur(std::wstring name) : CPokemon(name)
{
	SetBaseStats(45, 49, 49, 65, 65, 45);
}
