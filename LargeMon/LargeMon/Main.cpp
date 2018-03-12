#include "stdafx.h"
#include "PhysicalAttributeGenerator.h"
#include "Main.h"
#include "LargeMon.h"
#include "Battle.h"
#include "UserInterfaces.h"

using namespace std;
// controller class for game, based on inputs within the user interfaces.
int main() {
	
	PhysicalAttributeGenerator generator;
	LargeMon largemon;
	UserInterfaces interface;
	Battle battle;

	// use case statements to switch between possible screens
	int menuOption = interface.displayInitialScreen();
	switch (menuOption) {

	case 1:
			interface.displayGenerator();
			switch (interface.typeOption) {
			case 1:
				generator.genType(1);
				//type is set to fire
			case 2:
				generator.genType(2);
				//type is set to water
			case 3:
				generator.genType(3);
				//type is set to wood
			}
			largemon.setLargeMonID(generator.gen_largeMonID);
			largemon.setName(generator.genType);
			largemon.setType(generator.genType);
			largemon.setWeakness(generator.genWeakness);
			largemon.setSize(generator.gen_random_size);
			largemon.setHP(generator.gen_baseHP);
			largemon.setAttack(generator.gen_BaseAttack);
			largemon.setSpecAttack(generator.gen_SpecAttack);
			largemon.setMissChance(generator.assign_MissChance);
	case 2:
		//displays battle screen and creates opponent largeMon
		//also controls core of game
			interface.displayBattle();
			battle.setAIID(generator.gen_largeMonID);	
			battle.setAIname(generator.genType);
			battle.setAItype(generator.genType);
			battle.setAIweakness(generator.genWeakness);
			battle.setAIhealth(generator.gen_baseHP);
			battle.setAIAttack(generator.gen_BaseAttack);
			battle.setAISpecAttack(generator.gen_SpecAttack);
			battle.setAImiss(generator.assign_MissChance);
	case 3:
			interface.displayInfo();
			int returnOption = interface.displayInfo();
			if (returnOption = 1) {
				interface.displayInitialScreen();
			}
			else {
				cout << "Please Enter 1 to return to main screen";
			}
	}
}

