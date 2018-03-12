#include "stdafx.h"
#include "LargeMon.h"
#include <time.h>



//LargeMon::LargeMon() {
//	PhysicalAttributeGenerator generator;
//	largeMonID = generator.gen_largeMonID();
//	name = generator.genType(typeInt);
//	//typeInt = generator.genType(typeInt);
//	weakness = generator.genWeakness(typeInt);
//	size = generator.gen_random_size();
//	baseHP = generator.gen_baseHP();
//	baseAttack = generator.gen_BaseAttack();
//	specialAttack = generator.gen_SpecAttack();
//	missChance = generator.assign_MissChance();	
//}

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



