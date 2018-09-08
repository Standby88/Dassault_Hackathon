#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

//---------------------------------------------------------------------------------

/**
* @class Date
* @brief  Holds unsigned variables for a date input is in the form of dd/mm/yyyy
*
* @author Alex Gunn
* @version 01
* @date 29/03/2016
*
* @todo
*
* @bug
*/

class Date
{
public:
	Date();
	Date(unsigned d, unsigned m, unsigned y);

	/**
	* @brief Accessor
	*
	* Accessor function for the day int. \n
	*
	* @return int
	*/
	unsigned Getday() const;
	/**
	* @brief  Mutator
	*
	* Mutator function for the day int. \n
	*
	* @return void
	*/
	void Setday(unsigned int val);
	/**
	* @brief Accessor
	*
	* Accessor function for the month int. \n
	*
	* @return int
	*/
	unsigned int Getmonth() const;

	/**
	* @brief Accessor
	*
	* Accessor function for the month string. \n
	*
	* @return string
	*/
	string GetmonthS() const;
	/**
	* @brief  Mutator
	*
	* Mutator function for the month int. \n
	*
	* @return void
	*/
	void Setmonth(unsigned int val);
	/**
	* @brief Accessor
	*
	* Accessor function for the year int. \n
	*
	* @return int
	*/
	unsigned int Getyear() const;
	/**
	* @brief  Mutator
	*
	* Mutator function for the year int. \n
	*
	* @return void
	*/
	void Setyear(unsigned int val);
	/**
	* @brief  Mutator
	*
	* Mutator function for the month string. \n
	*
	* @return void
	*/
	void MonthIntToStr(int x);

	bool operator ==(const Date & oDate) const;

	bool operator < (const Date & oDate) const;

protected:

private:
	unsigned int day;   ///day int 1-31
	unsigned int month; ///month int 1-12
	unsigned int year;  ///year int
	string m;           /// month in a string
};

/**
* @brief  Overloads the standard output stream << function.
*
* ensures the overloaded function can take arguements from the Date class. \n
*
* @return void
*/
ostream & operator <<(ostream & os, const Date & D);

/**
* @brief  Overloads the standard input stream << function.
*
* ensures the overloaded function can take arguements from the Date class. \n
*
* @return void
*/
istream & operator >> (istream & input, Date & D);

#endif // DATE_H
