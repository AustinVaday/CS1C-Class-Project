
#include "../../Header Files/Header.h"
/**************************************************************************
 *
 * ListSelectionMenu
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
DisplayListMenu DisplayListSelectionMenu ()
{
	// Declare variables
	int				selection;		// IN   - an integer input the user specifies
	string			menuString;		// PROC - a string output menu for the user

	menuString   = 	"List Selection Menu\n"
					"=================================================\n"
					"1 - List all activated customers \n"
					"2 - List all deactivated customers\n"
					"3 - List all previous purchasers\n"
					"4 - List all customer reviews\n"
					"0 - Exit \n"
					"=================================================\n"
					"What would you like to do?: ";

	// Calls the function GetAndCheckInput to get and check the input
	// on a given range.
	selection = CheckInput(menuString, 0 , 4, 0);



	// PROC - type casting integer to enumeration type
	return DisplayListMenu(selection);
}
