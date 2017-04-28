/*
Author: Nicholas Allen
Class : CSI - 140 - 04
Assignment : Final Project
Certification of Authenticity :

I certify that this assignment is entirely my own work.
*/

#include "nicholas_allen_functions.h"
#include "matthew_schwartzkopf_functions.h"
#include "victor_alves_functions.h"

int max = 13;
bool heartCards[13];
bool diamondCards[13];
bool clubCards[13];
bool spadeCards[13];

void displayBoard(int numPlayerCards, int numComputerCards, int playerCardsSuit[], int computerCardsSuit[], int playerCardsNum[], int computerCardsNum[], string cardTop[], string cardBottom[])
{

	char symbols[4] = {3,4,5,6}; // 3 = hearts, 4 = diamonds, 5 = clubs, 6 = spades
	string cardPieces[4] = {"         ", " _______ ", "|       |", "|_______|"};

	cout << endl << "Computers Hand   ";

	for (int i = 0; i < numComputerCards; i++)
	{
		cout << cardPieces[1] << "  ";
	}

	cout << endl << "                 ";

	for (int i = 0; i < numComputerCards; i++)
	{
		cout << cardPieces[2] << "  ";
	}

	cout << endl << "                 ";

	for (int i = 0; i < numComputerCards; i++)
	{
		cout << cardTop[computerCardsNum[i]] << "  ";
	}

	cout << endl << "                 ";

	for (int i = 0; i < numComputerCards; i++)
	{
		cout << cardPieces[2] << "  ";
	}

	cout << endl << "                 ";

	for (int i = 0; i < numComputerCards; i++)
	{
		cout << "|   " << symbols[computerCardsSuit[i]] << "   |  ";

		//int cardSymbol;
		//cardSymbol = int(computerCards[i]);
		//cout << "|   " << symbols[3] << "   |  ";
	}
	
	cout << endl << "                 ";

	for (int i = 0; i < numComputerCards; i++)
	{
		cout << cardPieces[2] << "  ";
	}

	cout << endl << "   " << cardPieces[1] << "     ";

	for (int i = 0; i < numComputerCards; i++)
	{
		cout << cardBottom[computerCardsNum[i]] << "  ";
	}

	cout << endl << "   " << cardPieces[2] << "     ";

	for (int i = 0; i < numComputerCards; i++)
	{
		cout << cardPieces[2] << "  ";
	}

	cout << endl << "   " << cardTop[0] << "     ";

	for (int i = 0; i < numComputerCards; i++)
	{
		cout << cardPieces[3] << "  ";
	}

	cout << endl << "   " << cardTop[0] << "     ";
	cout << endl << "   " << cardTop[0] << "     ";
	cout << endl << "   " << cardTop[0] << "     ";

	cout << endl << "   " << cardTop[0] << "     ";

	///////////////////////////////////////////////////////
	///////////////////////////////////////////////////////
	///////////////////////////////////////////////////////


	for (int i = 0; i < numPlayerCards; i++)
	{
		cout << cardPieces[1] << "  ";
	}

	cout << endl << "   " << cardTop[0] << "     ";

	for (int i = 0; i < numPlayerCards; i++)
	{
		cout << cardPieces[2] << "  ";
	}

	cout << endl << "   " << cardPieces[3] << "     ";

	for (int i = 0; i < numPlayerCards; i++)
	{
		cout << cardTop[playerCardsNum[i]] << "  ";
	}

	cout << endl << "                 ";

	for (int i = 0; i < numPlayerCards; i++)
	{
		cout << cardPieces[2] << "  ";
	}

	cout << endl << "                 ";

	for (int i = 0; i < numPlayerCards; i++)
	{
		cout << "|   " << symbols[playerCardsSuit[i]] << "   |  ";

		//int cardSymbol;
		//cardSymbol = int(playerCards[i]);
		//cout << "|   " << symbols[3] << "   |  ";
	}

	cout << endl << "                 ";

	for (int i = 0; i < numPlayerCards; i++)
	{
		cout << cardPieces[2] << "  ";
	}

	cout << endl << "                 ";

	for (int i = 0; i < numPlayerCards; i++)
	{
		cout << cardBottom[playerCardsNum[i]] << "  ";
	}

	cout << endl << "                 ";

	for (int i = 0; i < numPlayerCards; i++)
	{
		cout << cardPieces[2] << "  ";
	}

	cout << endl << "Players Hand     ";

	for (int i = 0; i < numPlayerCards; i++)
	{
		cout << cardPieces[3] << "  ";
	}
	cout << endl;
}

void loadCards(string cardTop[], string cardBottom[])
{
	ifstream input;
	input.open("cards.txt");

	int i = 0;
	while (true)
	{
		if (input.eof())
		{
			break;
		}
		else {
			getline(input, cardTop[i]);
			getline(input, cardBottom[i]);
			i++;
		}
	}
	input.close();
}

int isCardUnique(int cardSuit, int cardNum)
{
	int temp = cardNum - 1;

	if (cardSuit == 0)
	{
<<<<<<< HEAD
		if (heartCards[temp] == true)
=======
		if (heartCards[cardNum] == true)
>>>>>>> 17f88cfe036ce8e7dbb27e28f03d9820a7e49294
		{
			return -1;
		}
		else
		{
			return 0;
		}
	}

	if (cardSuit == 1)
	{
<<<<<<< HEAD
		if (diamondCards[temp] == true)
=======
		if (diamondCards[cardNum] == true)
>>>>>>> 17f88cfe036ce8e7dbb27e28f03d9820a7e49294
		{
			return -1;
		}
		else
		{
			return 0;
		}
	}

	if (cardSuit == 2)
	{
<<<<<<< HEAD
		if (clubCards[temp] == true)
=======
		if (clubCards[cardNum] == true)
>>>>>>> 17f88cfe036ce8e7dbb27e28f03d9820a7e49294
		{
			return -1;
		}
		else
		{
			return 0;
		}
	}

	if (cardSuit == 3)
	{
<<<<<<< HEAD
		if (spadeCards[temp] == true)
=======
		if (spadeCards[cardNum] == true)
>>>>>>> 17f88cfe036ce8e7dbb27e28f03d9820a7e49294
		{
			return -1;
		}
		else
		{
			return 0;
		}
	}
}

void setCardUsed(int cardSuit, int cardNum)
{
	int temp = cardNum - 1;
	
	if (cardSuit == 0)
	{
		heartCards[temp] = true;
	}

	if (cardSuit == 1)
	{
		diamondCards[temp] = true;
	}

	if (cardSuit == 2)
	{
		clubCards[temp] = true;
	}

	if (cardSuit == 3)
	{
		spadeCards[temp] = true;
	}
}

void setCards()
{
	for (int i = 0; i < max; i++)
	{
		heartCards[i] = 0;
		diamondCards[i] = 0;
		clubCards[i] = 0;
		spadeCards[i] = 0;
	}
}
