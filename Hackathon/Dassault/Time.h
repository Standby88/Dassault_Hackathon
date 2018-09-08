#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

//---------------------------------------------------------------------------------

/**
* @class Time
* @brief  Holds unsigned variables for a time input is in the form of hh:mm
*
* @author Alex Gunn
* @version 01
* @date 17/04/2016
*
* @todo
*
* @bug
*/

class Time
{
public:
	Time();
	/**
	* @brief Accessor
	*
	* Accessor function for the hours. \n
	*
	* @return unsigned
	*/
	unsigned int Gethours()const;
	/**
	* @brief Mutator
	*
	* Sets the hours. \n
	*
	* @return void
	*/
	void Sethours(unsigned int val);
	/**
	* @brief Accessor
	*
	* Accessor function for the minutes. \n
	*
	* @return unsigned
	*/
	unsigned int Getminutes()const;
	/**
	* @brief Mutator
	*
	* Sets the minutes. \n
	*
	* @return void
	*/
	void Setminutes(unsigned int val);

	bool operator ==(const Time & oTime) const;

protected:

private:
	unsigned int hour;      ///hours unsigned integer
	unsigned int minutes;   ///minutes unsigned integer
};

/**
* @brief  Overloads the standard output stream << function.
*
* ensures the overloaded function can take arguements from the Time class. \n
*
* @return void
*/
ostream & operator <<(ostream & os, const Time & T);

/**
* @brief  Overloads the standard input stream << function.
*
* ensures the overloaded function can take arguements from the Time class. \n
*
* @return void
*/
istream & operator >> (istream & input, Time & T);

#endif // TIME_H
