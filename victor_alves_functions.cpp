/*
Author: Victor Alves
Class : CSI - 140 - 04
Assignment : Final Project
Certification of Authenticity :

I certify that this assignment is entirely my own work.
*/

#include "victor_alves_functions.h"
#include "nicholas_allen_functions.h"
#include "matthew_schwartzkopf_functions.h"

void PlayGame()
{
	char userExit = 'e';
	int userChoice;
	do
	{
		cout << "The game begins!" << endl;
		DrawTwo();
		cout << "You have your cards. You have three options: hit, stay, or fold." << endl;
		cout << "What are you going to do?" << endl;
		cout << "Select 1 if you want a hit, select 2 if you want to stay, or select 3 if you want to fold." << endl;
		cin >> userChoice;

		MakeChoice(userChoice);

	} while (userExit == 'E' && userExit == 'e');
}

void DrawOne()
{
	GetFinalCard();
}

void DrawTwo()
{
	GetFinalCard();
	GetFinalCard();
}

int SelectCardNumber()
{

	return 0;
}

int SelectCardSuit()
{
	return 0;
}

int GetFinalCard()
{
	SelectCardNumber();
	SelectCardSuit();

	return 0;
}

void MakeChoice(int userChoice)
{
	switch (userChoice)
	{
	case 1:
		cout << "You have elected to hit. You may draw a card." << endl;
		DrawOne();
		break;

	case 2:
		cout << "You have elected to stay. Once the computer ends its turn, both of you will reveal your cards." << endl;
		break;

	case 3:
		cout << "You have elected to fold. If the computer's hand is below 22, you lose. Discard your hand." << endl;
		DiscardHand();
		break;
	default:
		cout << "You did not select a valid option. Please try again." << endl;
		cin >> userChoice;
	}
}

void CheckWin()
{

}

char DiscardHand()
{
	char userExit;

	system("CLS");
	cout << "Would you like to continue playing Blackjack?" << endl;
	cout << "If not, enter 'E'or 'e' to exit the game." << endl;
	cin >> userExit;
	return userExit;
}