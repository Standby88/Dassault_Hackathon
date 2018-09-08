#include "Readings.h"



Readings::Readings()
{
}

bool Readings::Test_TimePosCountry()
{
	return true;
}

void Readings::InsertTransaction(Transaction T) 
{
	a_records.push_back(T);
}


Readings::~Readings()
{
}

istream & operator >> (istream & input, Readings & R)
{
	string tempStr;
	//first line is empty information
	getline(input, tempStr);

	Transaction temp;
	int x = 0;
	while (!input.eof())
	{
		x++;
		input >> temp;
		
		R.InsertTransaction(temp);
	}

	cout << "number of entries = " + x << endl;
	return input;
}