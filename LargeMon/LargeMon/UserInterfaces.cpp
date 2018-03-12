#include "stdafx.h"
#include <string>
#include <Windows.h>
#include <iostream>
#include "UserInterfaces.h"
#include "LargeMon.h"

LargeMon largemon;

using namespace std;


int UserInterfaces::displayInitialScreen() {
	cout << "Welcome to LargeMon" << endl;
	cout << "                   ---              " << endl;
	cout << "Please choose one of the following options" << endl;
	cout << " 1. Create a New LargeMon\n 2. Go to Battle!\n 3. Info Screen/Help\n";
	cin >> menuOption;
	return menuOption;
}

int UserInterfaces::displayGenerator() {
	cout << "This is the LargeMon Generator Screen" << endl;
	cout << "Please Select a Type you would like your LargeMon to be" << endl;
	cout << " 1. Fire\n 2. Water\n 3. Wood\n";
	cin >> typeOption;
	return typeOption;
}

//I added this in case you wanted to list the created Largemon so that the user could select them from a list.
//I would read the file and for each line list the LargeMon (I have just added 5 here as a place holder).
int UserInterfaces::displayChooseLargeMon() {
	cout << "Choose your LargeMon, select its number:" << endl;
	for (int i = 1; i < 5; i++) {
		cout << i << ": LargeMon" << endl;
	}
	cin >> LargeMonOption;
	return LargeMonOption;
}

int UserInterfaces::displayBattle() {
	cout << " 1. Attack\n 2. Special Attack\n 3. Heal\n";
	cin >> battleOption;
	return battleOption;
}

int UserInterfaces::displayInfo() {
	cout << "LargeMon Information & Help Screen" << endl;
	cout << "LargeMon is a fun and addictive game where you battle LargeMon (animal like creatures) against" << endl;
	cout << "each other striving to become the best trainer of them all!" << endl;
	cout << "                   ---              " << endl;
	cout << "In order to battle you first need to generate a LargeMon. To do so simply select 'Create a New LargeMon' from the main screen" << endl;
	cout << "and follow the on screen instructions to create your new companion" << endl;
	cout << "To Battle, select the 'Go to Battle' option from the main screen then select your LargeMon" << endl;
	cout << "                   ---              " << endl;
	cout << "Battles consist of one on one fights aiming to K.O your opponents LargeMon." << endl;
	cout << "In battle you have the choice of 3 Moves: Attack, Special Attack and Heal" << endl;
	cout << "                   ---              " << endl;
	cout << "Attacking hits your opponent for HP equal to your LargeMons attack points, however every LargeMon has a percentage miss chance so" << endl;
	cout << "you are not gauranteed a hit. Special Attack is a far more powerful attack that against a LargeMon who is weak to a certain type, the attack will" << endl;
	cout << "deal 1.5x damage. For instance Fire deals 1.5x damage to wood. Be careful though as you are limited to 3 special attack per battle " << endl;
	cout << "The healing ability restores a large portion of HP to your LargeMon which could save you. Your miss chance is significantly reduced though as a consequence" << endl;
	cout << "                   ---              " << endl;
	cout << "1.Return to Main Menu" << endl;
	cin >> returnOption;
	return returnOption;

}
