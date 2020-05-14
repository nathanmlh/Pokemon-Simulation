#pragma once

#include <string>
#include <memory>
#include <vector>

#include "Ability.h"

class CPokemon
{
public:
	/** Default constructor */
	CPokemon();

	CPokemon(std::wstring name);

	/** Copy constructor deleted*/
	CPokemon(const CPokemon&) = delete; 

	/** Sets the name of the pokemon 
	 * \param name The name of the pokmon
	 */
	void SetName(std::wstring name) { mName = name; }

	/** Gets the name of the pokemon
	 * \return mName The name of the pokemon
 	 */
	std::wstring GetName() { return mName; }

	/** Sets the first ability of this pokemon */
	void AddAbility(std::shared_ptr<CAbility> ability);

	/** Returns if this pokemon is fainted or not
	 * \return If this pokemon is fainted or not
	 */
	bool mIsFainted() { return mCurrentHealthPoints > 0; }

	std::shared_ptr<CAbility> GetRandomAbility() {return mAbilities[rand() % mAbilities.size()]; }

private:

	/// The pokemon number
	int mPokemonNumber = 0;

	/***************************************************************/
						/// Base stats ///
	/***************************************************************/

	/// The name of the pokemon.
	std::wstring mName;

	/// The level of the pokemon
	int mLevel = 0;
	
	/// The max hp this pokemon can get
	int mMaxHealthPoints = 0;

	/// Current health
	int mCurrentHealthPoints = mMaxHealthPoints = 0;

	/// Attack rating
	int mAttack = 0;

	/// Defense rating
	int mDefense = 0;

	/// Special attack rating
	int mSpecialAttack = 0;

	/// Special defense rating
	int mSpecialDefense = 0;

	/// Speed rating
	int mSpeed = 0;

	/// An array of Abilitys that this pokemon has (max 4)
	std::vector<std::shared_ptr<CAbility>> mAbilities;
};

