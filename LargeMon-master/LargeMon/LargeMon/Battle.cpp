#include "stdafx.h"
#include "Battle.h"
#include "LargeMon.h"

//TODO - autogenerate a LargeMon to battle against

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

	PhysicalAttributeGenerator AIgenerator;
	LargeMon AIlargemon;

	string type;

	void generateAILargemon() {

		vector <string> AITypes;
		AITypes.push_back("Fire");
		AITypes.push_back("Water");
		AITypes.push_back("Wood");

		AIlargemon.setLargeMonID(AIgenerator.gen_largeMonID);
		AIlargemon.setName(AIgenerator.genType);
		AIlargemon.setType(AITypes[AIgenerator.genType]);
		AIlargemon.setWeakness(AIgenerator.genWeakness);
		AIlargemon.setSize(AIgenerator.gen_random_size);
		AIlargemon.setHP(AIgenerator.gen_baseHP);
		AIlargemon.setAttack(AIgenerator.gen_BaseAttack);
		AIlargemon.setSpecAttack(AIgenerator.gen_SpecAttack);
		AIlargemon.setMissChance(AIgenerator.assign_MissChance);
	}
	then call this method within battle case of main class
	*/