#include "Bulbasaur.h"

CBulbasaur::CBulbasaur()
{
	SetName(L"Bulbasaur");
}

CBulbasaur::CBulbasaur(std::wstring name) : CPokemon(name)
{
}
