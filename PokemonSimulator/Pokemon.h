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

	CPokemon(std::string name);

	/** Copy constructor deleted*/
	CPokemon(const CPokemon&) = delete; 

	/** Sets the name of the pokemon 
	 * \param name The name of the pokmon
	 */
	void SetName(std::string name) { mName = name; }

	/** Gets the name of the pokemon
	 * \return mName The name of the pokemon
 	 */
	std::string GetName() { return mName; }

	/** Sets the maximum health points this pokemon has
	 * \param hp The health points we want to set it to
	 */
	void SetMaxHealthPoints(int hp) { mMaxHealthPoints = hp; }

	/** Sets the attack stat of this pokemon
	 * \param attack The attack stat we want to set
	 */
	void SetAttack(int attack) { mAttack = attack; }

	/** Sets the defense stat of this pokemon
	 * \param defense The defense stat we want to set
	 */
	void SetDefense(int defense) { mDefense = defense; }

	/** Sets the special attack stat of this pokemon
	 * \param spAttack The defense stat we want to set
	 */
	void SetSpecialAttack(int spAttack) { mSpecialAttack = spAttack; }

	/** Sets the special defense stat of this pokemon
	 * \param spDefense The special defense stat we want to set
	 */
	void SetSpecialDefense(int spDefense) { mSpecialDefense = spDefense; }

	/** Sets the speed stat of this pokemon
	 * \param speed The speed stat we want to set
	 */
	void SetSpeed(int speed) { mSpeed = speed; }

	/** Sets the first ability of this pokemon */
	void AddAbility(std::shared_ptr<CAbility> ability);

	/** Returns if this pokemon is fainted or not
	 * \return If this pokemon is fainted or not
	 */
	bool mIsFainted() { return mCurrentHealthPoints > 0; }

	/** Sets all the base stats of a pokemon...meant to be used in the constructor 
	 * \param level The level of this pokemon
	 * \param hp The health points
	 * \param atk The attack points
	 * \param defense The defense points
	 * \param spAtk The special attack stat
	 * \param spDef The special defense stat of the pokemon
	 * \param speed The speed of the pokemon*/
	void SetBaseStats(int level, int hp, int atk, int defense, int spAtk, int spDef, int speed);

	/** Outputs the current stat of this pokemon. */
	void OutputStats();

	/** Gets the abilities of this pokemon to use in a battle*/
	std::vector<std::shared_ptr<CAbility>> GetAbilities() { return mAbilities; };

	std::shared_ptr<CAbility> GetRandomAbility() {return mAbilities[rand() % mAbilities.size()]; }

private:

	/// The pokemon number
	int mPokemonNumber = 0;

	/***************************************************************/
						/// Base stats ///
	/***************************************************************/

	/// The name of the pokemon.
	std::string mName;

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

