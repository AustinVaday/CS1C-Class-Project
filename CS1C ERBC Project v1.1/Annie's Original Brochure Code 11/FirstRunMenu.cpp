/****************************************************************
* AUTHORS 		: Annie Raichev & Kyle Bendickson		        *
* LAB #13		: Inheritance, Overloading, and Overriding   	*
* CLASS 		: CS1B 											*
* SECTION 		: MW 10:00am - 12:00pm							*
* Due Date		: May 05, 2014								 	*
*****************************************************************/
#include "header.h"

/************************************************************************
 * FUNCTION FirstRunMenu
 *______________________________________________________________________
 * This function creates a menu for the first run, so the user can see what
 * number correlates with each menu option.
 * returns - > menu
 *______________________________________________________________________
 * PRE-CONDITIONS
 * none
 *
 * POST-CONDITIONS
 * This function will output the menu for this program
 ************************************************************************/
string FirstRunMenu()
{
	string menu;  //OUT - menu for first run of program

	menu =  "1 - See all Robots Info\n"
			"2 - see specific robots info\n"
	  	    "0 - Exit\n"
	  	    "Enter selection: ";

	return menu;

}
