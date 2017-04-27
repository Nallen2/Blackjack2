#include <iostream>
#include <string>
#include <fstream>
#include "matthew_schwartzkopf_functions.h"
#include "nicholas_allen_functions.h"

using namespace std;

int mainMenu(string firstName, string lastName, char startChoice);

int main()
{
	string firstName, lastName;
	char startChoice = NULL;
	int numPlayerCards = 2, numComputerCards = 2;
	double playerCards[5] = { 3.2, 4.1 };
	double computerCards[5] = { 12.4, 10.3 };
	int playerCardsNum[5] = { 3, 4 };
	int computerCardsNum[5] = { 12, 10 };
	string cardTop[14];
	string cardBottom[14];

	mainMenu(firstName, lastName, startChoice);
	if (startChoice == 'y' || startChoice == 'Y') {
		loadCards(cardTop, cardBottom);
		displayBoard(numPlayerCards, numComputerCards, playerCards, computerCards, playerCardsNum, computerCardsNum, cardTop, cardBottom);
	}
	else if (startChoice == 'n' || startChoice == 'N') {
		cout << "Would you like to exit the program?" << endl;
		cin >> startChoice;

		if (startChoice == 'y' || startChoice == 'Y') {
			return 0;
		}
	}

	system("pause");

	return 0;
}
