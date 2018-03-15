#pragma once
#include "stdafx.h"
#include <string>

class Battle {
public :
	int attack();
	int heal();
	int specAttack();
	void returnBattleResult();
	void updateBattleCount();
	int getAIhp();
	int getAICurrentHP();
	int getLimiter();
	int setLimiter(int);
	int updateLimiter();

private :
	int battleCount;
	int battleResult;
	int specAttackLimiter;
};