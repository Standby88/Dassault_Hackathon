#pragma once
#include "Date.h"
#include "Time.h"


class Transaction
{
public:
	Transaction();
	~Transaction();

	long tNo;

	long cID;	//customer ID number

	int numbAttempts;

	Date date;
	Time time;

	float Xpos, Ypos;

	float Amt;

	bool txstatus;

	int CountryofIssue;

	bool international;


};

istream & operator >> (istream & input, Transaction T);
