/*
Author: Victor Alves
Class : CSI - 140 - 04
Assignment : Final Project
Certification of Authenticity :

I certify that this assignment is entirely my own work.
*/
#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
// random numbers
#include <time.h>
#include <stdlib.h>

using namespace std;

void PlayGame();
void DrawCards_Player(int playerCardsSuit[], int playerCardsNum[], int& numPlayerCards, int numDraw);
void DrawCards_Computer(int computerCardsSuit[], int computerCardsNum[], int& numComputerCards, int numDraw);
//void CheckWin();
void MakeChoice(int playerCardsSuit[], int playerCardsNum[], int& numPlayerCards, int userChoice, char& userExit);
char DiscardHand();
