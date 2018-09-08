#include <iostream>
#include <fstream>
#include <string>
#include "Readings.h"


using namespace std;

int main()
{
	ifstream infile("Data/HACKATHON_FINAL_DATASET.csv");

	ofstream outfile("Data/Final/Processed");

	if (!infile) { return -1; }
	bool flag = true;
	Readings R;

	infile >> R;
	while (flag)
	{
		char menuS;

		cout << "End of file IO" << endl;

		cin >> menuS;

		return 0;
	}


	return 0;
}