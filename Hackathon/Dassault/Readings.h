#ifndef READINGS_H
#define READINGS_H

#include <iostream>
#include <fstream>
#include "Date.h"
#include "Time.h"
#include "Transaction.h"
#include <vector>


using namespace std;

class Readings
{
public:
	Readings();
	~Readings();

	bool Test_TimePosCountry();

	void InsertTransaction(Transaction T);

	vector<Transaction> a_records;
};

istream & operator >> (istream & input, Readings & R);

#endif