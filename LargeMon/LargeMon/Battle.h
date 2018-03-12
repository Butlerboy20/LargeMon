#pragma once
#include "stdafx.h"
#include <string>

class Battle {
public :
	void getRandomAI();
	void setAIID(int);
	void setAIname(string);
	void setAItype(string);
	void setAIweakness(string);
	void setAIhealth(int);
	void setAIAttack(int);
	void setAISpecAttack(int);
	void setAIHeal(int);
	void setAImiss(int);
	int getAIhp();
	void attack();
	void heal();
	void specAttack();
	void returnBattleResult();
	void updateBattleCount();
	void getLargeMon();
	int getAICurrentHP();
	int getLimiter();
	int setLimiter(int);
	int updateLimiter();
// dont know if set AI methods are necessary or if theres a better way to pull/ create a largemon within battle class

private :
	int battleCount;
	int battleResult;
	int specAttackLimiter;
	int AIID;
	std::string AIname;
	std::string AItype;
	std::string AIweakness;
	int AIHealth;
	int AIAttack;
	int AISpecAttack;
	int AIHeal;
	int AImissChance;
};