/**
 * \file Battle.h
 *
 * \author Nathan Holdom
 *
 * 
 */

#pragma once

#include "Pokemon.h"
#include "Trainer.h"

class CBattle
{
public:

	/** Creates a battle with two pokemon 
	 * \param yourPokemon Your pokemon in the battle 
	 * \param enemyPokemon The enemy pokemon in the battle*/
	CBattle(std::shared_ptr<CTrainer> yourself , std::shared_ptr<CPokemon> enemyPokemon);

	/** Default constructor deleted */
	CBattle() = delete;

	/** Copy constructor deleled */
	CBattle(const CBattle&) = delete;

	/** Checks if this battle is active
	 * \return If this battle is still active
	 */
	bool IsActive() { return !(mTrainer->GetStarter()->mIsFainted() && mEnemyPokemon->mIsFainted()); }

	/** Sets your active pokemon in the battle */
	void SetActivePokemon(std::shared_ptr<CPokemon> pokemon) { mActivePokemon = pokemon; }

	/** Sets the enemy pokemon 
	 * \param pokemon
	 */
	void SetEnemyPokemon(std::shared_ptr<CPokemon> pokemon) { mEnemyPokemon = pokemon; }

	/** The main loop of the battle. This controls everything else in the battle. */
	void MainLoop();

	/** This function runs when it is your turn */
	void YourTurn();

	/** This function runs when it is their turn */
	void TheirTurn();





	// Test functions: prints the participants in the battle
	void PrintParticipants();


private:

	/// Your active pokemon
	std::shared_ptr<CTrainer> mTrainer = nullptr;

	/// The active pokemon you have in battle
	std::shared_ptr<CPokemon> mActivePokemon = nullptr;

	/// The pokemon your active pokemon is battling
	std::shared_ptr<CPokemon> mEnemyPokemon = nullptr;



};

