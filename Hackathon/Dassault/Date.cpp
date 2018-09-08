#include "DATE.H"

Date::Date()
{
	Setday(0);
	Setmonth(0);
	Setyear(0);
}

unsigned Date::Getday() const
{
	return day;
}

void Date::Setday(unsigned int val)
{
	day = val;
}

unsigned int Date::Getmonth() const
{
	return month;
}

string Date::GetmonthS() const
{
	return m;
}

void Date::Setmonth(unsigned int val)
{
	month = val;
	int x = val;
	MonthIntToStr(x);
}

unsigned int Date::Getyear() const
{
	return year;
}

void Date::Setyear(unsigned int val)
{
	year = val;
}

void Date::MonthIntToStr(int x)
{
	switch (x)
	{
	case 1:
		m = "January";
		break;
	case 2:
		m = "February";
		break;
	case 3:
		m = "March";
		break;
	case 4:
		m = "April";
		break;
	case 5:
		m = "May";
		break;
	case 6:
		m = "June";
		break;
	case 7:
		m = "July";
		break;
	case 8:
		m = "August";
		break;
	case 9:
		m = "September";
		break;
	case 10:
		m = "October";
		break;
	case 11:
		m = "November";
		break;
	case 12:
		m = "December";
		break;
	}
}

ostream & operator <<(ostream & os, const Date & D)
{
	os << "  Date:  " << D.Getday() << "/";
	os << D.Getmonth() << "/" << D.Getyear() << '\n';

	return os;
}

istream & operator >> (istream & input, Date & D)
{
	string s1;
	unsigned x;
	getline(input, s1, '/');
	x = atoi(s1.c_str());
	D.Setmonth(x);
	getline(input, s1, '/');
	x = atoi(s1.c_str());
	D.Setday(x);
	getline(input, s1, ' ');
	x = atoi(s1.c_str());
	D.Setyear(x);
	return input;
}

bool Date:: operator ==(const Date & oDate) const
{
	return(year == oDate.Getyear() && month == oDate.Getmonth() && day == oDate.Getday());
}

bool Date:: operator <(const Date & oDate) const
{
	//if the year is less than the other date's this must be less than
	if (year <= oDate.Getyear())
		return true;

	//if the years are equal we need to check the months
	if (year == oDate.Getyear())
	{
		//if the month is less than the other date's this will be less than
		if (month <= oDate.Getmonth())
			return true;

		//if the years are equal and the months are equal we need to check the days
		if (month == oDate.Getmonth())
		{
			if (day <= oDate.Getday());
			return true;
			//we don't need to check if the days are equal because that would mean the
			//two dates are the same and therefore one can'tbe less than the other
		}
	}
	return false;
}

Date::Date(unsigned d, unsigned m, unsigned y)
{
	Setday(d);
	Setmonth(m);
	Setyear(y);
}
