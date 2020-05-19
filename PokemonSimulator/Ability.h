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

	/** Default constructor */
	CAbility();

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
	int GetCurrentPowerPoints() { return mCurrentPowerPoints; }

	/** Gets the max power points this ability has
	 * \return mMaxPowerPoints
	 */
	int GetMaxPowerPoints() { return mMaxPowerPoints; }

	/** Sets the max power points of this ability
	 * \param powerPoints The power points we want to set this move to
	 */
	void SetMaxPowerPoints(int powerPoints);

	/** Gets the name of the ability
	 * \return mName The name of the ability 
	 */
	std::string GetName() { return mName; }

	/** Sets the name of the ability...used in constructor 
	 * \param name The name we want to set of this ability 
	 */
	void SetName(std::string name) { mName = name; }

	/** Outputs the ability name and the power points */
	void OutputAbility();

private:

	/// The power this ability has
	int mPower = 0;

	/// The accuracy of this ability
	int mAccuracy = 0;

	/// How many times your pokemon can use this move
	int mCurrentPowerPoints = 0;

	/// The maximum power points of this move
	int mMaxPowerPoints = 0;

	/// The name of the ability
	std::string mName;

};

