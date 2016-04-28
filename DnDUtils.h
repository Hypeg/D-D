#pragma once
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

static const unsigned int NUMOFCLASSES = 8;
static const unsigned int NUMOFINFOLINES = 11;
static const unsigned int NUMOFRACES = 10;
static const unsigned int NUMOFINFOLINESRACES = 10;

std::string features[3][88];
std::string races[NUMOFRACES][NUMOFINFOLINESRACES];
std::string skills[34];
bool initized_classes = false;
bool initized_races = false;
std::string classes[NUMOFCLASSES][NUMOFINFOLINES]; 
std::string powers[102][7];

std::ifstream featsFile, raceFile, skillFile, classFile, powerFile;


std::string classs(std::string input)
{
	if (!initized_classes)
	{
		classFile.open("Classes.txt");
		std::string line;
		for (int current_class = 0; current_class < NUMOFCLASSES; current_class++) {
			for (int current_info = 0; current_info < NUMOFINFOLINES; current_info++) {
				getline(classFile, line);

				classes[current_class][current_info] = line;
			}
		}
		initized_classes = true;
		classFile.close();
	}
	int index = 0;
	for (int current_class = 0; current_class < NUMOFCLASSES; current_class++) {
		if (classes[current_class][0] == input) {
			index = current_class;
			break;
		}
	}

	std::string output;
	output.append("Class: " + classes[index][0] + "\n");
	output.append("Key Ability Score: " + classes[index][1] + "\n");
	output.append("Weapon Proficiencies: " + classes[index][2] + "\n");
	output.append("Armor Proficiencies: " + classes[index][3] + "\n");
	output.append("Bonus for Defense: " + classes[index][4] + "\n");
	output.append("Hit Points at First Level: " + classes[index][5] + "\n");
	output.append("Healing Surges: " + classes[index][6] + "\n");
	output.append("Deity Choice and Misc: " + classes[index][7] + "\n");
	output.append("Trained Skills: " + classes[index][8] + "\n");
	output.append("Class Skills: " + classes[index][9] + "\n");
	output.append("Class Features: " + classes[index][10] + "\n");
	return output;
}

std::string racess(std::string input2)
{
	if (!initized_races)
	{
		raceFile.open("Races.txt");
		std::string line;
		for (int current_race = 0; current_race < NUMOFRACES; current_race++) {
			for (int current_info = 0; current_info < NUMOFINFOLINESRACES; current_info++) {
				getline(raceFile, line);

				races[current_race][current_info] = line;
			}
		}
		initized_races = true;
		raceFile.close();
	}
	int index = 0;
	for (int current_race = 0; current_race < NUMOFRACES; current_race++) {
		if (races[current_race][0] == input2) {
			index = current_race;
			break;
		}
	}

	std::string output2;
	output2.append("Race: " + races[index][0] + "\n");
	output2.append("Height: " + races[index][1] + "\n");
	output2.append("Weight: " + races[index][2] + "\n");
	output2.append("Ability Score: " + races[index][3] + "\n");
	output2.append("Size: " + races[index][4] + "\n");
	output2.append("Speed: " + races[index][5] + "\n");
	output2.append("Vision: " + races[index][6] + "\n");
	output2.append("Language: " + races[index][7] + "\n");
	output2.append("Skill Bonuses: " + races[index][8] + "\n");
	output2.append("Features: " + races[index][9] + "\n");
	return output2;
}
int calcMod(int a)
{
	if (a == 8 || a == 9)
		return -1;
	else if (a == 10 || a == 11)
		return 0;
	else if (a == 12 || a == 13)
		return 1;
	else if (a == 14 || a == 15)
		return 2;
	else if (a == 16 || a == 17)
		return 3;
	else if (a == 18 || a == 19)
		return 4;
	else if (a == 20 || a == 21)
		return 5;
}