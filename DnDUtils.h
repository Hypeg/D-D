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

std::string features[3][88];
std::string races[10][9];
std::string skills[34];
bool initized_classes = false;
std::string classes[NUMOFCLASSES][NUMOFINFOLINES];
std::string powers[102][7];

std::ifstream featsFile, raceFile, skillFile, classFile, powerFile;

std::string classs(std::string input)
{
	if (!initized_classes)
	{
		classFile.open("Classes.txt");
		std::string line;
		for (int current_class = 0; current_class < NUMOFCLASSES; current_class++) {		//keeps track of which class
			for (int current_info = 0; current_info < NUMOFINFOLINES; current_info++) {	//places the info for each class at the y-coordinate
				getline(classFile, line);

				classes[current_class][current_info] = line;
				std::cout << line;
			}
		}
		initized_classes = true;
	}
	int index = 0;
	std::string input2 = input;
	for (int y = 0; y < NUMOFCLASSES; y++) {
		if (classes[y][0] == input2) {
			index = y;
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
	output.append("Short Description: " + classes[index][11] + "\n");
	classFile.close();
	return output;
}