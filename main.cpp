#include <iostream>
#include <string>
#include <fstream>
#include "matthew_schwartzkopf_functions.h"
#include "nicholas_allen_functions.h"
#include "victor_alves_functions.h"

using namespace std;

int mainMenu(string firstName, string lastName, char startChoice);

int main()
{
	string firstName, lastName;
	char startChoice = NULL;
	int numPlayerCards = 2, numComputerCards = 2;
	int playerCardsSuit[5] = { 2, 1 };
	int computerCardsSuit[5] = { 4, 3 };
	int playerCardsNum[5] = { 3, 4 };
	int computerCardsNum[5] = { 12, 10 };
	string cardTop[14];
	string cardBottom[14];
	mainMenu(firstName, lastName, startChoice);
	if (startChoice == 'y' || startChoice == 'Y') {
		loadCards(cardTop, cardBottom);
		displayBoard(numPlayerCards, numComputerCards, playerCardsSuit, computerCardsSuit, playerCardsNum, computerCardsNum, cardTop, cardBottom);
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
