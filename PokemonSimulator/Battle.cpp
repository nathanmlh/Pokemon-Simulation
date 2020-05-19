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
        cout << mTrainer->GetChoiceNumber() << ": Battle Menu" << endl;
        cout << "----------------" << endl;
        cout << "A - Attack" << endl;
        cout << "S - Stats" << endl;
        cout << "R - Run" << endl;
        cout << "X - Exit" << endl;
        cout << "Enter selection: " << endl;
        // read the input
        cin >> selection;

        switch (selection)

        {

        case 'A':
        case 'a': 
        {
            cout << "\n To attack the enemy pokemon\n";
            // Choosing the move
            int moveIndex = ChooseMove();
            mActivePokemon->DoDamage(mEnemyPokemon, moveIndex);
            break;
        }

        case 'S':
        case 's':
        {
            PrintParticipants();
        }

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

int CBattle::ChooseMove()
{
    vector<shared_ptr<CAbility>> abilities = mActivePokemon->GetAbilities();

    while (true)
    {
        cout << "Enter a move to choose from: " << endl;
        // Outputting abilities
        int counter = 1;
        for (auto ability : abilities)
        {
            cout << counter << ": " << ability->GetName() << " " << ability->GetCurrentPowerPoints()
                << "/" << ability->GetMaxPowerPoints() << endl;
            counter++;
        }

        char selection;
        cin >> selection;

        int selNum = selection - '0';
        // Checking if number you selected is in bounds
        if ((selNum >= 1) && (selNum <= abilities.size()))
        {
            return selNum - 1;
        }
        else
        {
            cout << "Please choose one of your moves." << endl;
        }
    }
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
