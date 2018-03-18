#include "stdafx.h"
#include "PhysicalAttributeGenerator.h"
#include "Main.h"
#include "LargeMon.h"
#include "Battle.h"
#include "UserInterfaces.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;
int selectedLargeMon;
// controller class for game, based on inputs within the user interfaces.

int main() {
	
	PhysicalAttributeGenerator generator;
	LargeMon largemon, AIlargemon;
	UserInterfaces interface;
	Battle battle;
	
	string type;

	vector <string> pTypes;
	pTypes.push_back("");
	pTypes.push_back("Fire");
	pTypes.push_back("Water");
	pTypes.push_back("Wood");

	int menuOption = 0;
	//random number for generating type for AI LargeMon
	srand(time(NULL));
	int randomTypeNumber = (rand() % 3) + 1;

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
				cout << "Your LargeMon is called :" << type << endl;
				cout << "Type : " << pTypes[interface.typeOption] << endl;
				cout << "Weakness : " << generator.genWeakness(interface.typeOption) << endl;
				cout << "Size :  " << generator.gen_random_size() << endl;
				cout << "Health :  " << generator.gen_baseHP() << endl;
				cout << "AttackPoints :  " << generator.gen_BaseAttack() << endl;
				cout << "SpecialAttack :  " << generator.gen_SpecAttack() << endl;
				cout << "MissChance :  " << generator.assign_MissChance() << endl;

				break;

				//water
			case 2:
				type = generator.genType(2);
				cout << "Your LargeMon is called :" << type << endl;
				cout << "Weakness : " << generator.genWeakness(interface.typeOption) << endl;
				cout << "Size :  " << generator.gen_random_size() << endl;
				cout << "Health :  " << generator.gen_baseHP() << endl;
				cout << "AttackPoints :  " << generator.gen_BaseAttack() << endl;
				cout << "SpecialAttack :  " << generator.gen_SpecAttack() << endl;
				cout << "MissChance :  " << generator.assign_MissChance() << endl;

				break;

				//wood
			case 3:
				type = generator.genType(3);
				cout << "Your LargeMon is called :" << type << endl;
				cout << "Weakness : " << generator.genWeakness(interface.typeOption) << endl;
				cout << "Size :  " << generator.gen_random_size() << endl;
				cout << "Health :  " << generator.gen_baseHP() << endl;
				cout << "AttackPoints :  " << generator.gen_BaseAttack() << endl;
				cout << "SpecialAttack :  " << generator.gen_SpecAttack() << endl;
				cout << "MissChance :  " << generator.assign_MissChance() << endl;

				break;

			default:
				break;

			}
			largemon.setName(type);
			largemon.setType(pTypes[interface.typeOption]);
			largemon.setWeakness(generator.genWeakness(interface.typeOption));
			largemon.setSize(generator.gen_random_size());
			largemon.setHP(generator.gen_baseHP());
			largemon.setAttack(generator.gen_BaseAttack());
			largemon.setSpecAttack(generator.gen_SpecAttack());
			largemon.setMissChance(generator.assign_MissChance());

			cout << "Would you like to save your new friend or abandon it? Yes/No?" << endl;
			cout << "Please Enter y or n" << endl;

			char saveOrNot;
			cin >> saveOrNot;
			switch (saveOrNot) {
			case 'y':
				// save to file goes here
				// I think that you need to save to an array/vector rather than a file
				cout << "Your LargeMon has been successfully saved." << endl;
				break;
			case 'n':
				// delete largeMon
				cout << "Your LargeMon has been removed from the game." << endl;
				break;
			}

			cout << "Your LargeMon has been created, returning you to the menu \n\n\n\n";

			break;

		case 2:
			//this starts by allowing the user to select a largeMon from these created by them
			//the point to the array element is returned
			selectedLargeMon = interface.displayChooseLargeMon();
			if (interface.LargeMonOption == 0) {
				interface.displayInitialScreen();
			}
			cout << "Your LargeMon as been selected, now time to battle\n\n";

			//Auto generates opponent largemon
			if (interface.LargeMonOption != 0) {
				//call the AI method from within battle.cpp
				//I have modified the method to return the generated AI largeMon
				AIlargemon = generateAIlargemon(randomTypeNumber);
			}

			//largemon(selectedLargeMon);
			//this then displays the battle options
			interface.displayBattle();
			//your selected and the returned generated LargeMon is passed to the battle method
			//the LargeMon selection method would either return the users selected largeMon or a pointer to the LargeMon array
			//which ever method is used to select the LargeMon then it will be passed to the battle method like below
			//performBattle(myLargMon, AIlargemon);

			break;

		case 3:
			// displays the information and Help Screen
			int returnOption = interface.displayInfo();
			while (returnOption != 1 || cin.fail()) //error check for incorrect keyboard input
			{
				cout << "Input 1 to return to main \n";
				cin.clear();
				cin.ignore(256, '\n');
				cin >> returnOption;
			}
			break;

			//TO DO
			//case 4:
			// exit game;	
		}
	} while (menuOption != 5);
}

