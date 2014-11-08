/**************************************************************************
* AUTHORS       :
**************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;
/**************************************************************************
*
* FUNCTION CharCheck
* ________________________________________________________________________
*
* This function will use a do-while loop to validate whether user input
* is a one character or the other
*
* ________________________________________________________________________
* PRE-CONDITIONS:
*   ALL OF THE FOLLOWING MUST HAVE A PREDEFINED VALUE
*   outputString : will output a message to the user
*   charOne      : first char val to check
*   charTwo	     : second char val to check
*
* POST-CONDITIONS:
*   character    : will be sent back with a value of charOne or
*         		   charTwo
*
*
**************************************************************************/
char  CharCheck(  string    outputString,   // IN - will output a message
											//      to the user
				  char	    charOne,		// IN - first char val to check
				  char	    charTwo,		// IN - second char val to check
				  const int SIZE)			// IN - setw width for output

{
	// initializes variable
	char character;           // PROCESSING: the character the user enters
	char uppercaseChar;		  // PROCESSING: the two-upper character

	// This loop will error check user input so that it ends up as
	// either a charOne or charTwo
	do //while(character != charOne && character != charTwo);
	{
		cout << setw(SIZE);
		cout << outputString;
		cin.get(character);
		uppercaseChar = toupper(character);
		cin.ignore(1000, '\n');


		// if the character is not equal to a 'F' or an 'M', then
		// the program will output an error message for the user.
		if(uppercaseChar != charOne && uppercaseChar != charTwo)
		{
			cout << "**** " << character << " is an invalid entry ****\n";
			cout << "**** Please input " << charOne << " or " << charTwo;
			cout << "   ****" <<  endl << endl;
		}
	}while(uppercaseChar != charOne && uppercaseChar != charTwo);

	return uppercaseChar;
}
