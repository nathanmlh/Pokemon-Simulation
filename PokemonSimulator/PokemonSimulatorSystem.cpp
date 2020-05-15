/**
 * \file PokemonSimulator.cpp
 *
 * \author Nathan Holdom
 */

#include "Trainer.h"
#include "Menu.h"
#include "Bulbasaur.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    // Getting name for trainer
    string name;
    cout << "Please input your name: ";
    getline(cin, name);
    shared_ptr<CTrainer> trainer = make_shared<CTrainer>(name);

    // Adding bulbasaur to trainer's party
    trainer->AddPokemon(make_shared<CBulbasaur>());

    // Creating menu
    shared_ptr<CMenu> menu = make_shared<CMenu>(trainer);

    menu->MainLoop();
}