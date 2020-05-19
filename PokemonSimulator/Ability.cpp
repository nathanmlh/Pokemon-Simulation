#include "Ability.h"

#include <iostream>

using namespace std;

CAbility::CAbility()
{
}

void CAbility::SetMaxPowerPoints(int powerPoints)
{
	mMaxPowerPoints = powerPoints;
	mCurrentPowerPoints = mMaxPowerPoints;
}

void CAbility::OutputAbility()
{
	cout << mName << " : " << mCurrentPowerPoints << "/" << mMaxPowerPoints << endl;
}
