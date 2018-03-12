#include "stdafx.h"
#include "PhysicalAttributeGenerator.h"
#include "Main.h"
#include "LargeMon.h"
#include "Battle.h"
#include "UserInterfaces.h"
#include <iostream>

using namespace std;
// controller class for game, based on inputs within the user interfaces.
int main() {
	
	PhysicalAttributeGenerator generator;
	LargeMon largemon;
	UserInterfaces interface;
	Battle battle;
	
	string type;

	vector <string> pTypes;
	pTypes.push_back("Fire");
	pTypes.push_back("Water");
	pTypes.push_back("Wood");

	int menuOption = 0;

	do
	{
		// use case statements to switch between possible screens
		menuOption = interface.displayInitialScreen();

		switch (menuOption)
		{
		case 1:
			interface.displayGenerator();
			switch (interface.typeOption) {
				//fire type
			case 1:
				type = generator.genType(1);
				cout << "Your LargeMon is going to be :" << type << endl;
				break;

				//water
			case 2:
				type = generator.genType(2);
				break;

				//wood
			case 3:
				type = generator.genType(3);
				break;

			default:
				break;

			}

			largemon.setLargeMonID(generator.gen_largeMonID());
			largemon.setName(type);
			largemon.setType(pTypes[interface.typeOption]);
			largemon.setWeakness(generator.genWeakness(interface.typeOption));
			largemon.setSize(generator.gen_random_size());
			largemon.setHP(generator.gen_baseHP());
			largemon.setAttack(generator.gen_BaseAttack());
			largemon.setSpecAttack(generator.gen_SpecAttack());
			largemon.setMissChance(generator.assign_MissChance());

			//TODO
			//create an interface here to display your LargeMon statistics (if you want)

			//return to menu
			cout << "Your LargeMon has been created, returning you to the menu \n\n\n\n";
			interface.displayInitialScreen();

			break;

		case 2:
			//this starts by allowing the user to select a largeMon from these created by them
			interface.displayChooseLargeMon();
			cout << "Your LargeMon as been selected, now choose your battle\n\n";
			//this then displays the battle options
			interface.displayBattle();

			//TODO - autogenerate a LargeMon to battle against

			//battle.setAIID(generator.gen_largeMonID);	
			//battle.setAIname(generator.genType);
			//battle.setAItype(generator.genType);
			//battle.setAIweakness(generator.genWeakness);
			//battle.setAIhealth(generator.gen_baseHP);
			//battle.setAIAttack(generator.gen_BaseAttack);
			//battle.setAISpecAttack(generator.gen_SpecAttack);
			//battle.setAImiss(generator.assign_MissChance);


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

			break;

		case 3:
			//interface.displayInfo();
			int returnOption = interface.displayInfo();
			if (returnOption = 1) {
				interface.displayInitialScreen();
			}
			else {
				cout << "Please Enter 1 to return to main screen";
			}

			break;

		//case 4:
		//	interface.displayInfo();
		//	cout << "Leaving Application, Goodbye!" << endl;
		//	break;

		//default:
		//	interface.displayInfo();
		//	break;
		}

	} while (menuOption != 4);
	
}

