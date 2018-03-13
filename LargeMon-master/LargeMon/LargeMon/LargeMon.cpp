#include "stdafx.h"
#include "LargeMon.h"
#include <time.h>


void LargeMon::setLargeMonID(int IDgiven) {
	largeMonID = IDgiven;
}

string LargeMon::setType(string typeGiven){
	return type = typeGiven;
}

string LargeMon::setWeakness(string largeWeak){
	return weakness = largeWeak;
}

string LargeMon::setName(string largeMonName){
	return name = largeMonName;
}

void LargeMon::setSize(float gensize) {
	size = gensize;
}
void LargeMon::setHP(int genHP) {
	baseHP = genHP;
}
void LargeMon::setAttack(int genAttack) {
	baseAttack = genAttack;
}
void LargeMon::setSpecAttack(int specAttack) {
	specialAttack = specAttack;
}
void LargeMon::setMissChance(int mChance) {
	missChance = mChance;
}

void LargeMon::generate()
{
}



