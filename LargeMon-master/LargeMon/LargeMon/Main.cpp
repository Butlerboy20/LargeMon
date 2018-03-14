#include "stdafx.h"
#include "PhysicalAttributeGenerator.h"
#include "Main.h"
#include "LargeMon.h"
#include "Battle.h"
#include "UserInterfaces.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <time.h>

//Test for cmd git link

using namespace std;
// controller class for game, based on inputs within the user interfaces.

int main() {
	
	PhysicalAttributeGenerator generator;
	LargeMon largemon, AIlargemon;
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
				cout << "Your LargeMon is called :" << type << endl;
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
				largemon.setLargeMonID(generator.gen_largeMonID());
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
						cout << "Your LargeMon has been successfully saved." << endl;
						break;
					case 'n' :
						// delete largeMon
						cout << "Your LargeMon has been removed from the game." << endl;
						break;
				}
			
			cout << "Your LargeMon has been created, returning you to the menu \n\n\n\n";
			interface.displayInitialScreen();

			break;

		case 2:
			//this starts by allowing the user to select a largeMon from these created by them
			interface.displayChooseLargeMon();
			if (interface.LargeMonOption == 0) {
				interface.displayInitialScreen();
			}
			cout << "Your LargeMon as been selected, now choose your battle\n\n";
			//this then displays the battle options
			interface.displayBattle();
			
			//generates opponents largemon
			srand(time (NULL));
			int TempRandomTypeNumber = int (type);
			int randomTypeNumber = TempRandomTypeNumber.push_back(pTypes[rand() % 3]);

			AIlargemon.setLargeMonID(generator.gen_largeMonID());
			AIlargemon.setName(pTypes[randomTypeNumber]);
			AIlargemon.setType(pTypes[randomTypeNumber]);
			AIlargemon.setWeakness(generator.genWeakness(randomTypeNumber));
			AIlargemon.setSize(generator.gen_random_size());
			AIlargemon.setHP(generator.gen_baseHP());
			AIlargemon.setAttack(generator.gen_BaseAttack());
			AIlargemon.setSpecAttack(generator.gen_SpecAttack());
			AIlargemon.setMissChance(generator.assign_MissChance());

			cout << "Your opponent is :" << pTypes[randomTypeNumber] << endl;
			cout << "Weakness : " << generator.genWeakness(randomTypeNumber) << endl;
			cout << "Size :  " << generator.gen_random_size() << endl;
			cout << "Health :  " << generator.gen_baseHP() << endl;
			cout << "AttackPoints :  " << generator.gen_BaseAttack() << endl;
			cout << "SpecialAttack :  " << generator.gen_SpecAttack() << endl;
			cout << "MissChance :  " << generator.assign_MissChance() << endl;
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
		
		//TO DO
		//case 4:

		// exit game;	
		}

	} while (menuOption != 5);
}

