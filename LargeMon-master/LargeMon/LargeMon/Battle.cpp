#include "stdafx.h"
#include "PhysicalAttributeGenerator.h"
#include "Main.h"
#include "LargeMon.h"
#include "Battle.h"
#include "UserInterfaces.h"
#include <cstdlib>
#include <ctime>>

//TODO
//here implement a do ..while loop so that you can keep taking turns as you select the attack options

//within the loop 
//TODO
//implement the battle logic/maths based on the selection above andcompare the generated/selected LargeMon with the auto generated one above

//TODO 
//record the HP and attack selection to a file (apppend a new line)

//exit the loop when eith HP = 0

//TODO
//display the outcome/winner
/**using namespace std;

	LargeMon AIlargemon;
	UserInterfaces interfaces;
	PhysicalAttributeGenerator aiGenerator;

	vector <string> fTypes;
	fTypes.push_back("");
	fTypes.push_back("Fire");
	fTypes.push_back("Water");
	fTypes.push_back("Wood");
		
		//random number for generating type for AI LargeMon
		srand(time(NULL));
		int randomTypeNumber = (rand() % 3) + 1;

	void generateAIlargemon(int randomTypeNumber) {
		if (interfaces.LargeMonOption != 0) {
			AIlargemon.setName(aiGenerator.genAIName(randomTypeNumber));
			AIlargemon.setType(fTypes[randomTypeNumber]);
			AIlargemon.setWeakness(aiGenerator.genWeakness(randomTypeNumber));
			AIlargemon.setSize(aiGenerator.gen_random_size());
			AIlargemon.setHP(aiGenerator.gen_baseHP());
			AIlargemon.setAttack(aiGenerator.gen_BaseAttack());
			AIlargemon.setSpecAttack(aiGenerator.gen_SpecAttack());
			AIlargemon.setMissChance(aiGenerator.assign_MissChance());

			//prints out AI stats to screen
			cout << "Your opponent is : " << aiGenerator.genAIName(randomTypeNumber) << endl;
			cout << "Type : " << fTypes[randomTypeNumber] << endl;
			cout << "Weakness : " << aiGenerator.genWeakness(randomTypeNumber) << endl;
			cout << "Size :  " << aiGenerator.gen_random_size() << endl;
			cout << "Health :  " << aiGenerator.gen_baseHP() << endl;
			cout << "AttackPoints :  " << aiGenerator.gen_BaseAttack() << endl;
			cout << "SpecialAttack :  " << aiGenerator.gen_SpecAttack() << endl;
			cout << "MissChance :  " << aiGenerator.assign_MissChance() << endl;
			cout << "\n\n\n";
		}
	}
	
void updateBattleCount() {
	int battleCount = 1;
		while (battleinterface.battleOption != 0) {
		battleCount--;
	}
}

int attack(getLargemonBaseAttack, AILargemon) {
	if (battleOption == 1) {
		int AIcurrentHP = AILargeMon.getBaseHp() - Largemon.getBaseAttack();
		AIcurrentHP = AILargeMon.setHP();
		return AILargeMon.HP
		updateBattleCount();
	}

int specAttack() {
	if (battleOption == 2) {
	int AIcurrentHP = AILargeMon.getBaseHp() - Largemon.getSpecAttack();
	AIcurrentHP = AILargeMon.setHP();
	return AILargeMon.HP
	updateBattleCount();
}

int heal () {
	int missChance = Largemon.getMissChance();
	if (battleOption == 3)
	int newHP = Largemon.getBaseHP() * 1.6;
	int newMissChance = missChance - 60;
	
	newMissChance = missChance
	newHP = BaseHP;
}

void returnBattleResult() {
	int AILargemonHP = AILargeMon.getCurrentHP();
	int LargemonHP = Largemon.getCurrentHP();
	if (AILargemonHP <= 0) {
	cout << "You win! Congratulations" << endl;
	}
	else if (LargemonHP <= 0 ) {
	cout << "You lose... Hope you enjoyed, please try again" << endl;
	}
	interface.displayInitialScreen();
}
*/
