#pragma once
#include <iostream>
#include <string>


using namespace std;
using std::string;

class LargeMon {
public:
	void setLargeMonID(int largeMonID);
	string setName(string largeName);
	string setType(int typeNo);
	string setWeakness(string largeWeak);
	void setSize(float size);
	void setHP(int baseHP);
	void setAttack(int baseAttack);
	void setSpecAttack(int specAttack);
	void setMissChance(int missChance);
	void generate();
	


private:
	int largeMonID;
	string name;
	int typeInt;
	string type;
	float size;
	int baseHP;
	int baseAttack;
	int specialAttack;
	int missChance;
	string weakness;
};
