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
	char			userExit = ' ';
	int				userChoice,
					numPlayerCards = 0,
					numComputerCards = 0,
					playerCardsSuit[5],
					computerCardsSuit[5],
					playerCardsNum[5],
					computerCardsNum[5];
	string			cardTop[14], 
					cardBottom[14];
	
	loadCards(cardTop, cardBottom); // 1) Loads cards from file
	srand((unsigned int)time(NULL));
	
	cout << "The game begins!" << endl;
	
	DrawCards_Computer(computerCardsSuit, computerCardsNum, numComputerCards, 2);
	DrawCards_Player(playerCardsSuit, playerCardsNum, numPlayerCards, 2); // 2) Draw two cards for player
	
		
	while (userExit != 'E' && userExit != 'e')
	{
		displayBoard(numPlayerCards, numComputerCards, playerCardsSuit, computerCardsSuit, playerCardsNum, computerCardsNum, cardTop, cardBottom); // 3) Display board
		
		cout << "You have your cards. You have three options: hit, stay, or fold." << endl;
		cout << "What are you going to do?" << endl;
		cout << "Select 1 if you want a hit, select 2 if you want to stay, or select 3 if you want to fold." << endl;
		cin >> userChoice;

		MakeChoice(playerCardsSuit, playerCardsNum, numPlayerCards, userChoice, userExit);
		MakeChoiceComputer(computerCardsSuit, computerCardsNum, numComputerCards, userChoice, userExit);
	}
	checkWin(computerCardsNum, playerCardsNum, numPlayerCards, numComputerCards);
	checkLose(computerCardsNum, playerCardsNum, numPlayerCards, numComputerCards);
}

void DrawCards_Player(int playerCardsSuit[], int playerCardsNum[], int& numPlayerCards, int numDraw)
{
	int index,
		noDuplicate,
		num;
	
	
	for (int i = 0; i < numDraw; i++)
	{
		index = numPlayerCards;
		playerCardsNum[index] = rand() % 13 + 1;
		playerCardsSuit[index] = rand() % 4;
		noDuplicate = isCardUnique(playerCardsSuit[index], playerCardsNum[index]);
		
		if (noDuplicate == 0)
		{
			numPlayerCards++;
			setCardUsed(playerCardsSuit[index], playerCardsNum[index]);
		}
		
		else if (noDuplicate == -1)
		{
			num = numDraw - i;
			DrawCards_Player(playerCardsSuit, playerCardsNum, numPlayerCards, num);
			break;
		}

	}
}

void DrawCards_Computer(int computerCardsSuit[], int computerCardsNum[], int& numComputerCards, int numDraw)
{
	int index,
		noDuplicate,
		num;


	for (int i = 0; i < numDraw; i++)
	{
		index = numComputerCards;
		computerCardsNum[index] = rand() % 13 + 1;
		computerCardsSuit[index] = rand() % 4;
		noDuplicate = isCardUnique(computerCardsSuit[index], computerCardsNum[index]);

		if (noDuplicate == 0)
		{
			numComputerCards++;
			setCardUsed(computerCardsSuit[index], computerCardsNum[index]);
		}

		else if (noDuplicate == -1)
		{
			num = numDraw - i;
			DrawCards_Computer(computerCardsSuit, computerCardsNum, numComputerCards, num);
			break;
		}

	}
}

void MakeChoice(int playerCardsSuit[], int playerCardsNum[], int& numPlayerCards, int userChoice, char& userExit)
{
	switch (userChoice)
	{
	case 1:
		cout << "You have elected to hit. You may draw a card." << endl;
		DrawCards_Player(playerCardsSuit, playerCardsNum, numPlayerCards, 1);
		break;

	case 2:
		cout << "You have elected to stay. Once the computer ends its turn, both of you will reveal your cards." << endl;
		break;

	case 3:
		cout << "You have elected to fold. If the computer's hand is below 22, you lose. Discard your hand." << endl;
		userExit = DiscardHand();
		break;
	default:
		cout << "You did not select a valid option. Please try again." << endl;
		cin >> userChoice;
	}
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