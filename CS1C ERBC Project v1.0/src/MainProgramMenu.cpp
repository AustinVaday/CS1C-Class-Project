/**************************************************************************
 * CS1C Class Project
 * -----------------------------------------------------------------------
 * Functions Menu
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

#include "../Header Files/Header.h"
/**************************************************************************
 *
 * MainProgramMenu
 *_________________________________________________________________________
 *	This function will assign an ordered menu output into a variable, then
 *	it will call the CheckInput function to prompt and validate user input.
 *	The input is then sent back and returned as a MainMenu type through
 *	type casting.
 *_________________________________________________________________________
 * PRE-CONDITIONS
 *	n/a		: nothing is passed in
 *
 * POST-CONDITIONS
 *	returns a type casted MainMenu value of an integer input
 *************************************************************************/
MainMenu MainProgramMenu ()
{
	// Declare variables
	int				selection;		// IN   - an integer input the user specifies
	string			menuString;		// PROC - a string output menu for the user

	menuString   = 	"\nMain Menu\n"
					"=================================================\n"
					"1 - Login\n"
					"2 - Request Brochure\n"
					"3 - Guest Access\n"
					"0 - Exit \n"
					"=================================================\n"
					"What would you like to do?: ";

	// Calls the function GetAndCheckInput to get and check the input
	// on a given range.
	selection = CheckInput(menuString, 0 , 10, 0);



	// PROC - type casting integer to enumeration type
	return MainMenu(selection);
}
