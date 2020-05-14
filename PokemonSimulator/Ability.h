/**
 * \file Ability.h
 *
 * \author Nathan Holdom
 *
 * 
 */

#pragma once

#include <string>

class CAbility
{

public:

	/** Gets the power for this ability
	 * \return mPower The power of this ability
	 */
	int GetPower() { return mPower; }

	/** Sets the power of this ability
	 * \param power The power we want to set this move to
	 */
	void SetPower(int power) { mPower = power; }

	/** Gets the accuracy for this ability
	 * \return mAccuracy The accuracy of this ability
	 */
	int GetAccuracy() { return mAccuracy; }

	/** Sets the accuracy of this ability
	 * \param accuracy The accuracy we want to set this move to
	 */
	void SetAccuracy(int accuracy) { mAccuracy = accuracy; }

	/** Gets the power points for this ability
	 * \return mPowerPoints The power points of this ability
	 */
	int GetPowerPoints() { return mPowerPoints; }

	/** Sets the power points of this ability
	 * \param powerPoints The power points we want to set this move to
	 */
	void SetPowerPoints(int powerPoints) { mPowerPoints = powerPoints; }

	/** Gets the name of the ability
	 * \return mName The name of the ability 
	 */
	std::wstring GetName() { return mName; }

	/** Sets the name of the ability...used in constructor 
	 * \param name The name we want to set of this ability 
	 */
	void SetName(std::wstring name) { mName = name; }


private:

	/// The power this ability has
	int mPower = 0;

	/// The accuracy of this ability
	int mAccuracy = 0;

	/// How many times your pokemon can use this move
	int mPowerPoints = 0;

	/// The name of the ability
	std::wstring mName;

};

