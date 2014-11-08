/************************************************************************
 * AUTHOR			: James Davis & Annie Raichev
 * LAB #9			: Stacks
 * CLASS			: CS1B
 * SECTION			: MW 10am
 * DUE DATE			: April 2, 2014
 ************************************************************************/

#include "header.h"
/**********************************************************
 *
 * FUNCTION CreateMenu
 *_________________________________________________________
 * This function creates a menu, so the user can see what
 * number correlates with each menu option.
 * returns - > menu
 *_________________________________________________________
 * PRE-CONDITIONS
 * none
 *
 * POST-CONDITIONS
 * This function will output the menu for this program
 ***********************************************************/

string CreateMenu()
{
	string menu;		//OUT - menu corresponding with each enum

	menu =  "ROBOT MENU:\n"
			"1 - see cost\n"
			"2 - see description\n"
			"3 - see specs\n"
			"4 - see model number\n"
			"5 - date created\n"
			"0 - Exit\n"
			"Enter a command? ";

	return menu;

}
