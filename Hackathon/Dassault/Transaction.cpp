#include "Transaction.h"



Transaction::Transaction()
{
}


Transaction::~Transaction()
{
}

istream & operator >> (istream & input, Transaction & t)
{
	string tempStr;

	//PK_TRANSACTION_ID
	getline(input, tempStr, ',');
	t.tNo = atol(tempStr.c_str());
	//FK_CUSTO_ID
	getline(input, tempStr, ',');
	t.cID = atol(tempStr.c_str());
	//date
	input >> t.date;
	//time
	input >> t.time;
	//position
	getline(input, tempStr, ',');
	if (tempStr.length() < 2)
	{
		t.Xpos = atof(tempStr.c_str());
	}
	else
	{
		t.Xpos = 0.0f;
	}

	getline(input, tempStr, ',');
	if (tempStr.length() < 2)
	{
		t.Ypos = atof(tempStr.c_str());
	}
	else
	{
		t.Ypos = 0.0f;
	}

	//attempts to access
	getline(input, tempStr, ',');
	t.numbAttempts = atoi(tempStr.c_str());
	//pin
	getline(input, tempStr, ',');
	t.pin = atoi(tempStr.c_str());
	//previous month
	getline(input, tempStr, ',');
	t.failPrevMonth = atoi(tempStr.c_str());

	//previous fraud det DUMP
	getline(input, tempStr, ',');

	//amt withdrawn
	getline(input, tempStr, ',');
	t.Amt = atof(tempStr.c_str());

	//transaction status
	getline(input, tempStr, ',');
	t.txstatus = atoi(tempStr.c_str());

	//country
	getline(input, tempStr, ',');
	t.CountryofIssue = atoi(tempStr.c_str());

	//international enabled
	getline(input, tempStr, ',');

	if(tempStr[0] == 'N')
	{
		t.international = false;
	}
	else
	{
		t.international = true;
	}

	//online transaction DUMP
	getline(input, tempStr, ',');

	//Credit card limit
	getline(input, tempStr);
	t.cLimit = atol(tempStr.c_str());

	return input;
}