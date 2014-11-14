/**************************************************************************
 * CS1C Class Project
 * -----------------------------------------------------------------------
 * Product Class Test
 * -----------------------------------------------------------------------
 * Version: 0.0.1
 * -----------------------------------------------------------------------
 * Programmers:
 *		Austin 	Vaday
 *		Anthony Ramirez
 *		Annie	Raichev
 *		Erik 	Karlsson
 *
 *************************************************************************/

#ifndef ERRORCHECKHEADER_H_
#define ERRORCHECKHEADER_H_

#include "Header.h"

/**************************************************************************
* Function CheckInput
* 	This function will receive an number input from the user, error check
*  the input, and then return a valid input to the program.
 *************************************************************************/
template <class Type>
Type CheckInput (string    outputMessage, 	// IN   - The message the progam
											//                  will output
				Type       lowBound,      	// IN   - Integer value for lower
											//            boundary limit
			    Type       highBound,     	// IN   - Integer value for higher
											//            boundary limit
				const int SIZE);			// IN 	- setw width for output
											//			  message
/**************************************************************************
* Function CharCheck
* This function will use a do-while loop to validate whether user input
* is a one character or the other
 *************************************************************************/
char  CharCheck(  string    outputString,   // IN - will output a message
											//      to the user
				  char	    charOne,		// IN - first char val to check
				  char	    charTwo,		// IN - second char val to check
				  const int SIZE);			// IN - setw width for output


/**************************************************************************
*
* FUNCTION CheckInput
* ________________________________________________________________________
*
* This function will receive an number input from the user, error check
*  the input, and then return a valid input to the program.
* ________________________________________________________________________
* PRE-CONDITIONS:
*
* THE FOLLOWING MUST HAVE PREVIOUSLY DECLARED VALUES
* outputMessage :       message that will be output (requests for input)
* lowBound      :       number value for lower boundary limit
* highBound     :       number value for higher boundary limit
* SIZE			: CONST Setw width for the output message
*
* POST-CONDITIONS:      will return a valid number input
*
**************************************************************************/
template <class Type>
Type CheckInput (string    outputMessage, 	// IN   - The message the progam
											//                  will output
				Type       lowBound,      	// IN   - Integer value for lower
											//            boundary limit
			    Type       highBound,     	// IN   - Integer value for higher
											//            boundary limit
				const int SIZE)				// IN 	- setw width for output
											//			  message
{
	/*********************
	 * Declare Variables
	 *********************/
	bool    		inValid;      // PROC - bool for error checking valid
								  //		inputs.
	Type     		inputVal;     // PROC - value the user enters in
	ostringstream 	oss1;		  // PROC - used for output manipulation
	ostringstream 	oss2;		  // PROC - used for output manipulation
	int 			ossLength1;	  // PROC - length of oss1
	int 			ossLength2;	  // PROC - length of oss2
	string 			ossString1;	  // PROC - the string value of oss1
	string 			ossString2;	  // PROC - the string value of oss2
	int 			lengthOutput; // PROC - the setw length of the output

	/***********************
	 * Initialize Variables
	 ***********************/
	inValid = true;

	// do while: checks if the input is valid
	// (not a character and not out of boundary)
	do
	{
		// Initialize/clear the ostringstream variables
		oss1.str("");
		oss2.str("");

		cout << left;
		cout << setprecision(8);
		oss1 << setprecision(8);
		oss2 << setprecision(8);
		// Output the output message with a user-defined width
		cout << setw(SIZE) << outputMessage;

		// If the input returns a fail state, will execute the following
		// i.e. if the input is NOT the same datatype as inputVal
		if(!(cin >> inputVal))
		{
			cout << endl;
			cout << "**** Please input a NUMBER between ";
			cout << lowBound << " and ";
			cout << highBound;
			cout << " ****\n\n";

			// Clears the input buffer
			cin.clear();

		}
		// If the value returned from the user input is of the same
		//  data type, will check if boundaries are valid
		else if(inputVal < lowBound || inputVal > highBound)
		{
			// Prepares for invalid entry notification
			oss1 << "**** The number " << inputVal << " is an invalid entry";

			// Stores the string value of oss1
			ossString1 = oss1.str();

			// Stores the length of oss1
			ossLength1 = ossString1.length();

			// Prepares for number suggestion notification
			oss2 << "**** Please input a number between ";
			oss2 << lowBound << " and ";
			oss2 << highBound;

			// Stores the string value of oss2
			ossString2 = oss2.str();

			// Stores the length of oss2
			ossLength2 = ossString2.length();

			// Selects the largest length to be used as the setw length
			if (ossLength1 > ossLength2)
			{
				// Adds one to the length of the string to add in a space
				lengthOutput = ossLength1 + 1;
			}
			else
			{
				// Adds one to the length of the string to add in a space
				lengthOutput = ossLength2 + 1;
			}

			/***********
			 * Output
			 ***********/
			cout << endl;
			cout << left;
			cout << setw(lengthOutput) << ossString1 << "****";
			cout << endl;
			cout << setw(lengthOutput) << ossString2 << "****";
			cout << endl << endl;
			cout << right;
		}
		// if no error, then will exit the loop.
		else
		{
			inValid = false;
		}

	//flush the input stream of any newline characters
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	}while (inValid);

	return inputVal;
}



#endif /* ERRORCHECKHEADER_H_ */
