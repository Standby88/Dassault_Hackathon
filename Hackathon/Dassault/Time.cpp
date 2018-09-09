#include "Time.H"

Time::Time()
{
	hour = 00;
	minutes = 00;
}

unsigned int Time::Gethours() const
{
	return hour;
}

void Time::Sethours(unsigned int val)
{
	hour = val;
}

unsigned int Time::Getminutes() const
{
	return minutes;
}

void Time::Setminutes(unsigned int val)
{
	minutes = val;
}

bool Time::operator ==(const Time & oTime) const
{
	return (hour == oTime.Gethours() && minutes == oTime.Getminutes());
}

//outputs the time in the form "Time: hh:mm"
ostream & operator <<(ostream & os, const Time & T)
{
	os << "  Time:  " << T.Gethours() << ":";
	os << T.Getminutes() << '\n';

	return os;
}
//instream which converts the items to int
istream & operator >> (istream & input, Time & T)
{
	string s1;
	unsigned x;
	getline(input, s1, ':');
	x = atoi(s1.c_str());
	T.Sethours(x);
	getline(input, s1, ',');
	if (s1.length() == 2)
	{
		x = atoi(s1.c_str());
	}
	else
	{
		s1 = s1.substr(0, 2);
		x = atoi(s1.c_str());
	}

	T.Setminutes(x);
	return input;
}
