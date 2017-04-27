//
//  matthewschwartzkopffunctoins.h
//  Final Project
//
//  Created by Matthew Schwartzkopf on 4/21/17.
//  Copyright © 2017 Matthew Schwartzkopf. All rights reserved.
//


#include <iostream>
#include <string>
#include <fstream>
#include "matthew_schwartzkopf_functions.h"
#include "victor_alves_functions.h"
#include "nicholas_allen_functions.h"

using namespace std;

int mainMenu(string firstName, string lastName, char startChoice);
void rules(char choice);
void howToPlay(char choice);
void PlayGame();

int mainMenu(string firstName, string lastName, char startChoice)
{
	char choice;
	
	do {
		cout << "               ---------------------------------------" << endl;
		cout << "               |            BLACK JACK               |" << endl;
		cout << "               ---------------------------------------" << endl;
		cout << endl;

		cout << "What would you like to view: " << endl;
		cout << "(R)ules" << endl;
		cout << "(H)ow to play" << endl;
		cout << "If neither, enter 'N'" << endl;
		cin >> choice;

		if (choice == 'r' || choice == 'R')
		{
			rules(choice);
		}

		if (choice == 'h' || choice == 'H')
		{
			howToPlay(choice);
		}

		if (choice == 'n' || choice == 'N')
		{
			cout << "Start round? (Y or N): " << endl;
			cin >> startChoice;

			if (startChoice == 'y' || 'Y')
			{
				PlayGame();
			}
			if (startChoice == 'n' || startChoice == 'N')
			{
				return 0;
			}
		}
	} while (choice != 'n' || choice != 'N' || startChoice != 'n' || startChoice != 'N');

	return 0;
}

void rules(char choice)
{
	cout << "                         -----------------" << endl;
	cout << "                         |     RULES     |" << endl;
	cout << "                         -----------------" << endl;
	cout << endl;
	cout << "Player gets two cards." << endl;
	cout << "if all of Player's total to less than 21 points," << endl;
	cout << "Player may 'hit' to get another card," << endl;
	cout << "'stay' (see 'stay') to keep current cards and let computer play turn," << endl;
	cout << "or 'fold' to cancel round" << endl;
	cout << endl;
}

void howToPlay(char choice)
{
	cout << endl;
	cout << "                           ----------------" << endl;
	cout << "                          |   How to play  |" << endl;
	cout << "                           ---------------- " << endl;
	cout << endl;
	cout << "With your current hand (see 'hand'), total the numbers of all your cards." << endl;
	cout << "Your objective is to get close to, or exactly 21 points." << endl;
	cout << "If your current hand is less than 21 points, consider getting hit (see 'hit') and repeat until you are either equal to, or bust (see 'bust'), unless the dealer busts or folds (see 'fold') first." << endl;
	cout << endl;

	cout << "Hand: Player's current cards." << endl;
	cout << "Hit: Asking the dealer for another card." << endl;
	cout << "Fold: Quitting a round and revealing your cards to your opponent." << endl;
	cout << "Bust: Scoring higher than 21 points." << endl;
	cout << "Stay: Keeping current hand and declining the option to 'hit'." << endl;

}
