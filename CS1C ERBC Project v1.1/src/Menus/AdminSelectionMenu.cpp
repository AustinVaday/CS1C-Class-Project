
#include "../../Header Files/Header.h"
/**************************************************************************
 *
 * AdminSelectionMenu
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
AdminMenu AdminSelectionMenu ()
{
	// Declare variables
	int				selection;		// IN   - an integer input the user specifies
	string			menuString;		// PROC - a string output menu for the user

	menuString   = 	"\nAdministrator Menu\n"
					"=================================================\n"
					"1 - Add a customer to Activated List \n"
					"2 - Add a customer to Deactivated List\n"
					"3 - Search for a customer and display him/her\n"
					"4 - Remove a Customer from Activated List\n"
					"5 - Permanently wipe Deactivated List\n"
					"6 - Recover an accidently deleted Customer\n"
					"7 - Modify the Help options\n"
					"8 - Modify the Customer reviews\n"
					"9 - Display a List\n"
					"0 - Exit \n"
					"=================================================\n"
					"What would you like to do?: ";

	// Calls the function GetAndCheckInput to get and check the input
	// on a given range.
	selection = CheckInput(menuString, 0 , 9, 0);



	// PROC - type casting integer to enumeration type
	return AdminMenu(selection);
}
