#include "Readings.h"



Readings::Readings()
{
}

bool Readings::Test_TimePosCountry()
{
	return true;
}

bool Readings::Test_OutOfCountry()
{
	vector<Transaction>::iterator it;

	// ARRAYS FOR COUNTRY BOUNDS
	int CountryCodes[] = { 1, 27, 44, 61, 64, 65, 91 };
	int LatMins[] = { 25, -35, 49.8, -44, -47, 1.2, 7.9 };
	int LatMaxes[] = { 49, -22, 59.2, -9, -34, 1.57, 31.8 };
	int LongMins[] = { -124, 16, -8.4, 113, 166, 103.59, 68 };
	int LongMaxes[] = { -75, 34, 2, 168, 185, 104.04, 89 };

	
	//for each transaction 
	for (it = a_records.begin(); it != a_records.end(); it++) {
		//assess country pos1, pos2 equate to if that country == cofissue && internation_enabled ==true
		if (it->Xpos != NULL) {
			for (int i = 0; i < 7; i++) {
				if (it->Xpos > LatMins[i] && it->Xpos < LatMaxes[i] && it->Ypos > LongMins[i] && it->Ypos < LongMaxes[i]) {
					if(CountryCodes[i] != it->CountryofIssue)
					{
						if (!it->international) {
							ofcResults.push_back(it);
						}
					}
				}
			}
		}
	}

	if (ofcResults.empty) {
		return false;
	}
	else {
		return true;
	}
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
	while (!input.eof())
	{

		input >> temp;
		
		R.InsertTransaction(temp);
	}

	return input;
}