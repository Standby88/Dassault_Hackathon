#include <iostream>
#include <fstream>
#include <string>
#include "Readings.h"


using namespace std;

int main(int argc, char* argv)
{
	ifstream infile("Data/HACKATHON_FINAL_DATASET.csv");

	ofstream outfile("Data/Final/Processed");

	if (!infile) { return -1; }
	bool flag = false;



	
}