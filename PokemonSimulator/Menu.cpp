/**
 * \file Menu.cpp
 *
 * \author Nathan Holdom
 */

#include "Menu.h"

#include <iostream>

using namespace std;

CMenu::CMenu(std::shared_ptr<CTrainer> trainer)
{
    mTrainer = trainer;
}

void CMenu::MainLoop()
{
    cout << "Hello " << mTrainer->GetName() << ", what would you like to do today?" << endl;

    while (true)
    {
        char selection;

        cout << "\n Menu";
        cout << "\n------";
        cout << "\n P - See your pokemon";
        cout << "\n B - Battle";
        cout << "\n X - Exit";
        cout << "\n Enter selection: ";

        // read the input
        cin >> selection;

        switch (selection)

        {
        case 'P':
        case 'p': {cout << "\n These are your pokemon!\n"; }
                mTrainer->OutputPokemon();
                // TODO: Implement outputting the pokemon you have in your inventory
                break;

        case 'B':
        case 'b': {cout << "\n Starting a battle!\n"; }

                cout << " You chose to start a battle!\n" << endl;
                // TODO: Implement starting a battle
                break;

        case 'X':
        case 'x': {cout << "\n To exit the simulation.\n"; }
                exit(0);

                // other than A, M, D and X...

        default: cout << "\n Invalid selection\n";

            // no break in the default case

        }

        cout << "\n";
    }
}
