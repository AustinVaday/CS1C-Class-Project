/***********************************************************************
 *	AUTHOR			: Anthony Ramirez
 *	STUDENT 		: 369397
 *	ASSIGNMENT #6  	: Nested If-Then-Else Statements
 *	CLASS   		: CS1A
 *	SECTION 		: T/TH 10 AM
 *	DUE DATE 		: 4/7/2014
 ***********************************************************************/

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

/***********************************************************************
 * Assignment #6: Nested If-Then-Else Statements
 * _____________________________________________________________________
 * This program will allow the user to input three integers and output
 * the largest of these three floating point values.
 * _____________________________________________________________________
 * INPUT :
 *       firstValue  : The first number the user inputs
 *       secondValue : The second number the user inputs
 *       thirdValue  : The third number the user inputs
 * OUTPUT:
 *       place       : c-string that holds the value of "1st",
 *                     "2nd" or "3rd"
 *       tempValue   : holds the value of first, second, or third value
 ***********************************************************************/

int main()
{
	/*******************************************************************
	 * CONSTANTS
	 * -----------------------------------------------------------------
	 * COL_WIDTH  : sets the width of the columns to 9
	 * -----------------------------------------------------------------
	 * PROGRAMMER : Programmer's Name
	 * CLASS      : Student's Course
	 * SECTIONS   : Class Day and Times
	 * LAB_NUM    : Lab Number (specific to this lab)\
	 * LAB_NAME   : Title of the Lab
	 *******************************************************************/
	const char PROGRAMMER [30] = "Anthony Ramirez";
	const char CLASS [5]       = "CS1A";
	const char SECTION [25]    = "T/TH: 10:00a - 11:50a";
	const int  LAB_NUM         = 6;
	const char LAB_NAME [35]   = "Nested If-Then-Else statements";
	const int COL_WIDTH = 9;

	float tempValue;   // CALC & OUT      - holds the largest value
	                   //                 - temporarily until output
	float firstValue;  // IN & CALC & OUT - user input and possible
	                   //                 - largest value based on
	                   //                 - selection statements
	float secondValue; // IN & CALC & OUT - user input and possible
	                   //                 - largest value based on
	                   //                 - selection statements
	float thirdValue;  // IN & CALC & OUT - user input and possible
	                   //                 - largest value based on
	                   //                 - selection statements
	char place[4];     // CALC & OUT      - holds "1st", "2nd", or
	                   //                 - "3rd" place based on
	                   //                 - selection statements

	// OUTPUT - Class Heading
	cout << left;
	cout << "****************************************************";
	cout << "\n* PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n* " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n* " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n* ASSIGNMENT #" << LAB_NUM << " : " << LAB_NAME;
	cout << "\n****************************************************\n\n";
	cout << right;

	/********************************************************************
	 * INPUT
	 *      In this section, the user is prompted for value 1, 2 and 3.
	 *
	 ********************************************************************/

	cout << left;

	cout << setw(COL_WIDTH) << "Value 1: ";
	cin  >> firstValue;

	cout << setw(COL_WIDTH) << "Value 2: ";
	cin  >> secondValue;

	cout << setw(COL_WIDTH) << "Value 3: ";
	cin  >> thirdValue;

	cout << right;

	/********************************************************************
	 * Processing
	 *       In this section, there is multiple If statements. The first
	 *       If-then-else statement has a nested If- then- else statement
	 *       that decides if either the firstValue or the thirdValue is
	 *       the largest. The second If -Then-Else statement is nested in
	 *       the first statements else section and compares the secondValue
	 *       and the thirdValue and decides which is largest.
	 *
	 ********************************************************************/

	if(firstValue > secondValue)
	{
		if(firstValue > thirdValue)
		{
			//Assigns place order "1st", into the variable "place"
			strcpy(place, "1st");

			//Declares that the firstValue is the largest and saves it
			//into the value tempVal
			tempValue=firstValue;

		}
		else
		{
			//Assigns place order "3rd", to the variable "place"
			strcpy(place, "3rd");

			//Declares that the thirdValue is the largest and saves it
			//into the value tempVal
			tempValue=firstValue;
		}
	}
	else
	{
		if(secondValue > thirdValue)
		{
			//Assigns the place order "2nd", to the variable "place"
			strcpy(place, "2nd");

			//Declares that the secondValue is the largest and saves it
			//into the value tempVal
			tempValue=secondValue;
		}
		else
		{
			//Assigns the place order "3rd", to the variable "place"
			strcpy(place, "3rd");

			//Declares that the thirdValue is the largest and saves it
			//into the value tempVal
			tempValue=thirdValue;

		}
	}


	/************************************************************************
	 * OUTPUT
	 *       The place, and largest value are output in a literal c-string
	 *
	 ************************************************************************/
	cout << endl;
	cout << fixed << setprecision(2);
	cout << "The largest value is the " << place << " value: " << tempValue;

	return 0;

}
