#include "stdafx.h"
#include "PhysicalAttributeGenerator.h"
#include "Main.h"
#include "LargeMon.h"
#include "Battle.h"
#include "UserInterfaces.h"
#include <cstdlib>
#include <ctime>>

PhysicalAttributeGenerator generator;
LargeMon myLargeMon, AIlargemon;
Battle battle;

LargeMon generateAIlargemon(int randomTypeNumber) {

		vector <string> fTypes;
		fTypes.push_back("");
		fTypes.push_back("Fire");
		fTypes.push_back("Water");
		fTypes.push_back("Wood");

		AIlargemon.setName(generator.genAIName(randomTypeNumber));
		AIlargemon.setType(fTypes[randomTypeNumber]);
		AIlargemon.setWeakness(generator.genWeakness(randomTypeNumber));
		AIlargemon.setSize(generator.gen_random_size());
		AIlargemon.setHP(generator.gen_baseHP());
		AIlargemon.setAttack(generator.gen_BaseAttack());
		AIlargemon.setSpecAttack(generator.gen_SpecAttack());
		AIlargemon.setMissChance(generator.assign_MissChance());

		//prints out AI stats to screen
		cout << "Your opponent is : " << generator.genAIName(randomTypeNumber) << endl;
		cout << "Type : " << fTypes[randomTypeNumber] << endl;
		cout << "Weakness : " << generator.genWeakness(randomTypeNumber) << endl;
		cout << "Size :  " << generator.gen_random_size() << endl;
		cout << "Health :  " << generator.gen_baseHP() << endl;
		cout << "AttackPoints :  " << generator.gen_BaseAttack() << endl;
		cout << "SpecialAttack :  " << generator.gen_SpecAttack() << endl;
		cout << "MissChance :  " << generator.assign_MissChance() << endl;
		cout << "\n\n\n";

		return AIlargemon;
}

void performBattle(LargeMon myLargMon, LargeMon generatedMon) {

	//this method gets passed two LargeMon types, your LargeMon and the AI LargeMon
	//here you should be able to do what you wish with them ...

	myLargeMon = myLargMon;
	AIlargemon = generatedMon;

}


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
