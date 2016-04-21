#pragma once
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>



std::string features[3][88];
std::string races[10][9];
std::string skills[34];
std::string classes[8][11];
std::string powers[102][7];

std::ifstream featsFile, raceFile, skillFile, classFile, powerFile;

std::string classs(std::string input)
{
	classFile.open("Classes.txt");
	std::string line;
	std::string output;
	for (int x = 0; x < 9; x++) {		//keeps track of which ability in the list
		for (int y = 0; y < 11; y++) {	//while all three spots for that ability is being written, (name, race avaiable, and effect)

			getline(classFile, line);

			classes[y][x] = line;



		}
	}
	int x = 0;
	for (int y = 0; y < 8; y++) {
		if (classes[0][y] == input) {
			x = y;
			y = 8;
		}
	}
	output.append("Class: " + classes[0][x] + "\n");
	output.append("Key Ability Score: " + classes[1][x] + "\n");
	output.append("Weapon Proficiencies: " + classes[2][x] + "\n");
	output.append("Armor Proficiencies: " + classes[3][x] + "\n");
	output.append("Bonus for Defense: " + classes[4][x] + "\n");
	output.append("Hit Points at First Level: " + classes[5][x] + "\n");
	output.append("Healing Surges: " + classes[6][x] + "\n");
	output.append("Deity Choice and Misc: " + classes[7][x] + "\n");
	output.append("Trained Skills: " + classes[8][x] + "\n");
	output.append("Class Skills: " + classes[9][x] + "\n");
	output.append("Class Features: " + classes[10][x] + "\n");
	output.append("Short Description: " + classes[11][x] + "\n");
	classFile.close();
	return output;
}