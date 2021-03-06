/**
 * \file Trainer.h
 *
 * \author Nathan Holdom
 *
 * 
 */

#pragma once

#include "Pokemon.h"

#include <string>
#include <vector>
#include <memory>

class CTrainer
{
public:

	/** Default constructor */
	CTrainer();
	
	/** Constructor with name
	 * \param name The name of the trainer
	*/
	CTrainer(std::string name);

	/** Gets the name of the trainer.
	 * \return mName The name of the trainer 
	 */
	std::string GetName() { return mName; }

	/** Gets how many choices this trainer has done
	 * \return The number of choices this trainer has done
	 */
	int GetChoiceNumber() { return mChoices; }

	/** Prints all the pokemon you have in your team to the screen */
	void OutputPokemon();

	/** Adds the given pokemon to your party 
	 * \param pokemon The pokemon we want to add to our party
	 */
	void AddPokemon(std::shared_ptr<CPokemon> pokemon);

	/** Increase the move number by 1 */
	void IncreaseChoices() { mChoices++; }

	/** This function gets the starter pokemon of the trainer
	 * \return The starter pokemon of the trainer
	 */
	std::shared_ptr<CPokemon> GetStarter() { return mParty[0]; }

private:
	
	/// The name of the trainer
	std::string mName;

	/// The main party of this trainer
	std::vector<std::shared_ptr<CPokemon>> mParty;

	/// Counter for how many times we have made a choice
	int mChoices = 0;
};

