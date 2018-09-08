// FraudDetectionMenu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

//declaring functions
void displayMenu();
void getSelection();
void detectOutsideCofI();
void detectDiverseArea();
void detectSerial();
void detectTheftSpam();

int main()
{
	displayMenu();
	getSelection();
}

void displayMenu()
{
	cout << "Fraud Detection Menu" << endl;
	cout << "--------------------" << endl;
	cout << "1. Transaction outside Country of Issue" << endl;
	cout << "2. Transactions on an account in diverse areas in a short time" << endl;
	cout << "3. Serial Amounts" << endl;
	cout << "4. Transactions on multiple accounts in a short time, small area" << endl;
	cout << "5. ?" << endl;
	cout << "Q. Quit" << endl;
	cout << "Enter your selection: ";
}

void getSelection()
{
	char selection;
	cin >> selection;

	//use up newline so it doesn't automatically do something unexpected
	//cin.ignore();
	//cin.clear();


	switch (selection)
	{
	case '1':
		detectOutsideCofI();
		break;
	case '2':
		detectDiverseArea();
		break;
	case'3':
		detectSerial();
		break;
	case'4':
		detectTheftSpam();
		break;
	case'5':
		cout << "pattern not found\n" << endl;
		displayMenu();
		getSelection();
		break;
	case'q':
	case'Q':
		cout << "Quitting" << endl;
		return;
		break;
	default:
		cout << "Invalid selection, please try again\n" << endl;
		displayMenu();
		getSelection();
	}
}

void detectOutsideCofI() 
{
	cout << "processing transactions for those occurring outside country of issue without permission\n" << endl;

	//run algorithm

	displayMenu();
	getSelection();
}

void detectDiverseArea()
{
	cout << "processing transactions for those of a single customer occurring in diverse areas concurrently\n" << endl;

	//run algorithm

	displayMenu();
	getSelection();
}

void detectSerial()
{
	cout << "processing transactions for those of a single customer occurring concurrently with varying large amounts\n" << endl;

	//run algorithm

	displayMenu();
	getSelection();
}

void detectTheftSpam()
{
	cout << "processing transactions for multiple customers in a small geographical area in a small period of time\n" << endl;

	//run algorithm

	displayMenu();
	getSelection();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
