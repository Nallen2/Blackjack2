/*
Author: Nicholas Allen
Class : CSI - 140 - 04
Assignment : Final Project
Certification of Authenticity :

I certify that this assignment is entirely my own work.
*/
#pragma once

#ifndef _nicholas_allen
#define _nicholas_allen

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void displayBoard(int numPlayerCards, int numComputerCards, int playerCardsSuit[], int computerCardsSuit[], int playerCardsNum[], int computerCardsNum[], string cardTop[], string cardBottom[]);
void loadCards(string cardTop[], string cardBottom[]);

int isCardUnique(int cardSuit, int cardNum);
void setCardUsed(int cardSuit, int cardNum);
void setCards();

#endif;
