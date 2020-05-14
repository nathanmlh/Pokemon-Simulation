/**
 * \file PokemonSimulator.cpp
 *
 * \author Nathan Holdom
 */

#include "Bulbasaur.h" 
#include "Battle.h"


#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<CBulbasaur> myBulbasaur = std::make_shared<CBulbasaur>(L"Bulby");

    std::wcout << myBulbasaur->GetName();
    
}