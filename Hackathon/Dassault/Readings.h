#ifndef READINGS_H
#define READINGS_H

#include <iostream>
#include <fstream>
#include "Date.h"
#include "Time.h"

using namespace std;

class Readings
{
public:
	Readings();
	~Readings();

	bool Test_TimePosCountry();

};

istream & operator >> (istream & input, Readings R);

#endif