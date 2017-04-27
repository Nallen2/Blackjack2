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
	
	mainMenu(firstName, lastName, startChoice);
	
	// if (startChoice == 'y' || startChoice == 'Y') {
		// loadCards(cardTop, cardBottom);
		// displayBoard(numPlayerCards, numComputerCards, playerCardsSuit, computerCardsSuit, playerCardsNum, computerCardsNum, cardTop, cardBottom);
	// }
	/*
	else if (startChoice == 'n' || startChoice == 'N') {
		cout << "Would you like to exit the program?" << endl;
		cin >> startChoice;

		if (startChoice == 'y' || startChoice == 'Y') {
			return 0;
		}
	}
	*/
	system("pause");

	return 0;
}
