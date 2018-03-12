#pragma once
#include "stdafx.h"

class UserInterfaces
{
public :
		int displayInitialScreen();
	
	//Generator Screen to be displayed
		int displayGenerator();

	//Battle Screen displays
		int displayBattle();
		int battleOption;
	
	// Display Information Screen
		int displayInfo();
		int typeOption;
	
	//

private :
	int menuOption;
	int returnOption;
};