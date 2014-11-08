/****************************************************************
* AUTHORS 		: Annie Raichev & Kyle Bendickson		        *
* LAB #13		: Inheritance, Overloading, and Overriding   	*
* CLASS 		: CS1B 											*
* SECTION 		: MW 10:00am - 12:00pm							*
* Due Date		: May 05, 2014								 	*
*****************************************************************/

#include "header.h"
/*************************************************************************
 *
 * FUNCTION GetAndCheckNumInput
 * _______________________________________________________________________
 * This function receives a string prompt for a number and an upper and
 * 	lower bound for the input response to the prompt. The function prompts
 * 	the user for an integer input to the prompt and error checks it to be
 * 	an int between the two accepted bounds.
 *
 * RETURNS: a valid integer input
 * _______________________________________________________________________
 * PRE-CONDITIONS
 * 		All of the following parameters have to have values previously
 * 		 defined:
 * 		PROMPT     : String prompt for an integer
 * 		upperBound : Upper bound for a valid response to PROMPT
 * 		lowerBound : Lower bound for a valid response to PROMPT
 *
 * POST-CONDITIONS
 * 		input : Validated integer input to PROMPT
 ************************************************************************/
int GetAndCheckNumInput(string PROMPT, 	  // IN - Prompt for int
				        int    lowerBound, // IN - Lower Bound
				        int    upperBound) // IN - Upper Bound
{
	// Variables
	bool          inputValid; // CALC - Boolean variable for invalid input
	int           input;      // IN & OUT & RETURN - User integer input
	ostringstream oss;        // CALC & OUT - ostringstream variable
	string  	  invalidStr; // CALC & OUT - Output string to alert user
							  //              of an invalid entry
	string        confirmStr; // CALC & OUT - Output string to confirm to
							  //              the user the valid entries
	int           errorWidth; // CALC - Output width for invalid entry
							  //        message

	// Initializeations
	inputValid = false;
	cout << left;

	// Continues to prompt the user for an integer response until a valid
	//  integer input is entered
	do
	{
		cout << left;
		cout << PROMPT;

		/*****************************************************************
		 * If a non-integer input is read in from the input buffer, the
		 * function will output an error message reminding the user of
		 * the requirements for their response and then reflag and clear
		 * the input buffer for reuse. If an invalid integer response is
		 * entered, the function alerts the user that their input is
		 * incorrect and then clears the input buffer for reuse. Otherwise
		 * for any valid integer response entered, the boolean variable
		 * controlling the loop is updated to true.
		 ****************************************************************/
		if(!(cin >> input))
		{
			cout << endl;
			cout << "**** Please input a NUMBER between "
				 << lowerBound << " and " << upperBound << " ****"
				 << endl << endl;

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

		}
		else if(input > upperBound || input < lowerBound)
		{
			// Outputs the invalid entry message to the ostring stream
			//  buffer so that it can be formatted to screen and then
			//  assigns the stream as a string to invalidStr
			oss << "**** The number " << input
				<< " is an invalid entry";

			invalidStr = oss.str();
			oss.str("");

			// Outputs the input confirmation to oss for formatting and
			//  assigns as a string to the confirm string
			oss << "**** Please input a number between "
				 << lowerBound << " and " << upperBound;

			confirmStr = oss.str();
			oss.str("");

			// To determine the output width of the two error messages
			//  for equal spacing, determines the larger of the two above
			//  strings and then assigns the output width as the larger
			//  size plus one to account for a space
			if(invalidStr.size() > confirmStr.size())
			{
				errorWidth = invalidStr.size() + 1;
			}
			else
			{
				errorWidth = confirmStr.size() + 1;
			}

			cout << endl;
			cout << setw(errorWidth) << invalidStr << "****" << endl;
			cout << setw(errorWidth) << confirmStr << "****" << endl;
			cout << endl;

			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			inputValid = true;
		}

	}while(!inputValid);

	// Clears the input buffer after a valid int input is extracted and
	//  updates the justification to its default
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << right;

	return input;

} // END GetAndCheckNumResponse
































float GetAndCheckNumInput(string PROMPT, 	  // IN - Prompt for int
				          float  lowerBound, // IN - Lower Bound
				          float  upperBound) // IN - Upper Bound
{
	// Variables
	bool          inputValid; // CALC - Boolean variable for invalid input
	float         input;      // IN & OUT & RETURN - User integer input
	ostringstream oss;        // CALC & OUT - ostringstream variable
	string  	  invalidStr; // CALC & OUT - Output string to alert user
							  //              of an invalid entry
	string        confirmStr; // CALC & OUT - Output string to confirm to
							  //              the user the valid entries
	int           errorWidth; // CALC - Output width for invalid entry
							  //        message

	// Initializeations
	inputValid = false;
	cout << left;

	// Continues to prompt the user for an integer response until a valid
	//  integer input is entered
	do
	{
		cout << left;
		cout << PROMPT;

		/*****************************************************************
		 * If a non-float input is read in from the input buffer, the
		 * function will output an error message reminding the user of
		 * the requirements for their response and then reflag and clear
		 * the input buffer for reuse. If an invalid integer response is
		 * entered, the function alerts the user that their input is
		 * incorrect and then clears the input buffer for reuse. Otherwise
		 * for any valid integer response entered, the boolean variable
		 * controlling the loop is updated to true.
		 ****************************************************************/
		if(!(cin >> input))
		{
			cout << endl;
			cout << "**** Please input a NUMBER between "
				 << lowerBound << " and " << upperBound << " ****"
				 << endl << endl;

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

		}
		else if(input > upperBound || input < lowerBound)
		{
			// Outputs the invalid entry message to the ostring stream
			//  buffer so that it can be formatted to screen and then
			//  assigns the stream as a string to invalidStr
			oss << "**** The number " << input
				<< " is an invalid entry";

			invalidStr = oss.str();
			oss.str("");

			// Outputs the input confirmation to oss for formatting and
			//  assigns as a string to the confirm string
			oss << "**** Please input a number between "
				 << lowerBound << " and " << upperBound;

			confirmStr = oss.str();
			oss.str("");

			// To determine the output width of the two error messages
			//  for equal spacing, determines the larger of the two above
			//  strings and then assigns the output width as the larger
			//  size plus one to account for a space
			if(invalidStr.size() > confirmStr.size())
			{
				errorWidth = invalidStr.size() + 1;
			}
			else
			{
				errorWidth = confirmStr.size() + 1;
			}

			cout << endl;
			cout << setw(errorWidth) << invalidStr << "****" << endl;
			cout << setw(errorWidth) << confirmStr << "****" << endl;
			cout << endl;

			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			inputValid = true;
		}

	}while(!inputValid);

	// Clears the input buffer after a valid int input is extracted and
	//  updates the justification to its default
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << right;

	return input;

} // END GetAndCheckNumResponse
