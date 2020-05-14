/**
 * \file PokemonSimulator.cpp
 *
 * \author Nathan Holdom
 */

#include "Bulbasaur.h" 
#include "Caterpie.h"
#include "Battle.h"


#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<CBulbasaur> myBulbasaur = std::make_shared<CBulbasaur>(L"Bulby");
    std::shared_ptr<CCaterpie> enemy = std::make_shared<CCaterpie>(L"enemy1");

    CBattle testBattle(myBulbasaur, enemy);
    testBattle.PrintParticipants();
}