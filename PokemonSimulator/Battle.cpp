#include "Battle.h"

#include <iostream>

using namespace std;

CBattle::CBattle(std::shared_ptr<CPokemon> yourPokemon, std::shared_ptr<CPokemon> enemyPokemon)
{
    mYourPokemon = yourPokemon;
    mEnemyPokemon = enemyPokemon;
}

void CBattle::YourTurn()
{
    char selection;

    cout << "\n Battle Menu";
    cout << "\n-------------";
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
            break;

    case 'X':
    case 'x': {cout << "\n To exit the simulation."; }
            exit(0);

            // other than A, M, D and X...

    default: cout << "\n Invalid selection";

        // no break in the default case

    }

    cout << "\n";
}

void CBattle::TheirTurn()
{
    cout << "The enemy " << mEnemyPokemon->GetName() << " used " << mEnemyPokemon->GetRandomAbility()->GetName() << endl;
}

void CBattle::PrintParticipants()
{
    cout << "The participants are: " << endl;
    cout << mYourPokemon->GetName() << " and " << mEnemyPokemon->GetName() << endl;
    mYourPokemon->OutputStats();
    mEnemyPokemon->OutputStats();
}
