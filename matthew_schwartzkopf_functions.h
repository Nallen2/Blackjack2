//
//  matthewschwartzkopffunctoins.h
//  Final Project
//
//  Created by Matthew Schwartzkopf on 4/21/17.
//  Copyright © 2017 Matthew Schwartzkopf. All rights reserved.
//

#ifndef matthewschwartzkopffunctoins_h
#define matthewschwartzkopffunctoins_h
#include <string>
#include <iostream>
using namespace std;

int mainMenu(string firstName, string lastName, char startChoice);
void rules(char choice);
void howToPlay(char choice);
void checkWin(int computerCardsNum[], int playerCardsNum[], int numPlayerCards, int numComputerCards);
void MakeChoiceComputer(int computerCardsSuit[], int computerCardsNum[], int& numComputerCards, int userChoice, char& userExit);


#endif /* matthewschwartzkopffunctoins_h */
