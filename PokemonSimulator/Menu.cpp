/**
 * \file Menu.cpp
 *
 * \author Nathan Holdom
 */

#include "Menu.h"
#include "Battle.h"
#include "Caterpie.h"

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
        // Increases move number by 1
        mTrainer->IncreaseChoices();

        char selection;
        cout << "\n" << mTrainer->GetChoiceNumber() << ": Menu";
        cout << "\n---------";
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
                // Outtputting all pokemon you have in your party
                mTrainer->OutputPokemon();
                break;

        case 'B':
        case 'b':
        {
            cout << "\n Starting a battle!\n";
            cout << " You chose to start a battle!\n" << endl;
            // TODO: Implement starting a battle
            shared_ptr<CCaterpie> new_caterpie = make_shared<CCaterpie>("enemy1");
            CBattle newBattle(mTrainer, new_caterpie);
            newBattle.MainLoop();
            break;
        }

        case 'X':
        case 'x': {cout << "\n To exit the simulation.\n"; }
                // Displays stats after simulation is over
                DisplayStats();
                exit(0);

                // other than A, M, D and X...

        default: cout << "\n Invalid selection\n";

            // no break in the default case

        }

        cout << "\n";
    }
}

void CMenu::DisplayStats()
{
    cout << endl;
    cout << "Stats" << endl;
    cout << "-------" << endl;

    cout << "Number of player choices: " << mTrainer->GetChoiceNumber() << endl;
}
