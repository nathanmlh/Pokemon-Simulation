#include "Battle.h"

#include <iostream>

using namespace std;

CBattle::CBattle(std::shared_ptr<CTrainer> yourself, std::shared_ptr<CPokemon> enemyPokemon)
{
    mTrainer = yourself;
    SetActivePokemon(mTrainer->GetStarter());
    mEnemyPokemon = enemyPokemon;
}

void CBattle::MainLoop()
{
    PrintParticipants();

    while (true)
    {
        // Increases the choices for each menu options the player has to choose from
        mTrainer->IncreaseChoices();

        char selection;
        cout << "\n" << mTrainer->GetChoiceNumber() << ": Battle Menu";
        cout << "\n----------------";
        cout << "\n A - Attack";
        cout << "\n R - Run";
        cout << "\n X - Exit";
        cout << "\n Enter selection: ";
        // read the input
        cin >> selection;

        switch (selection)

        {

        case 'A':
        case 'a': {cout << "\n To attack the enemy pokemon\n"; }
                cout << "You chose attack the other pokemon" << endl;
                break;

        case 'R':
        case 'r': {cout << "\n To run from the battle"; }

                cout << "Run has not been implemented! Please implement." << endl;
                return;

        case 'X':
        case 'x': 
        {
            cout << "You have chosen to exit the battle." << endl;
            return;
        }

        default: cout << "\n Invalid selection";

            // no break in the default case

        }

        cout << "\n";
    }
}

void CBattle::YourTurn()
{
}

void CBattle::TheirTurn()
{
    cout << "The enemy " << mEnemyPokemon->GetName() << " used " << mEnemyPokemon->GetRandomAbility()->GetName() << endl;
}

void CBattle::PrintParticipants()
{
    cout << "The participants are: " << endl;
    cout << mActivePokemon->GetName() << " and " << mEnemyPokemon->GetName() << endl;
    mActivePokemon->OutputStats();
    mEnemyPokemon->OutputStats();
}
