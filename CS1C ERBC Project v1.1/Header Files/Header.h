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

#ifndef HEADER_H_
#define HEADER_H_

#include "PreprocessorDirectiveHeader.h"

#include "ErrorCheckHeader.h"

#include "ExceptionHandlers.h"

/**************************************************************************
* ENUM DATAYPES
* -------------------------------------------------------------------------
* USED FOR WHOLE PROGRAM
* -------------------------------------------------------------------------
*
*
 *************************************************************************/

enum WhichList
{
	ACTIVATED_LIST,
	DEACTIVATED_LIST
};

enum MainMenu
{
	PROGRAM_EXIT,
	PROGRAM_ADMIN_LOGIN,
	PROGRAM_CUSTOMER_LOGIN,
	PROGRAM_PRODUCT_DESCRIPTION,
	PROGRAM_BROCHURE_REQUEST
};

enum AdminMenu
{
	ADMIN_EXIT,
	ADD_CUSTOMER_ACTIVATED,
	ADD_CUSTOMER_DEACTIVATED,
	SEARCH_AND_DISPLAY_CUSTOMER,
	REMOVE_ACTIVATED_CUSTOMER,
	WIPE_DEACTIVATED_LIST,
	RECOVER_ACCIDENTAL_DELETION,
	MODIFY_HELP_OPTIONS,
	MODIFY_CUSTOMER_REVIEWS,
	DISPLAY_A_LIST

};

// MenuOptions - Enumerated type corresponds to the integer values in the
//               menu, used for the user to enter commands
enum BrochureMenu
{
	EXIT, COST, DESC, SPECS, MODEL, DATE,
};

enum DisplayListMenu
{
	LIST_EXIT,
	LIST_ACTIVATED,
	LIST_DEACTIVATED,
	LIST_PREV_PURCHASERS,
	LIST_CUSTOMER_REVIEWS
};

enum CustomerMenu
{


};


/**************************************************************************
 * AdminSelectionMenu
 * 	This function will assign an orderded menu output into a variable, then
 *	it will call the CheckInput function to prompt and validate user input.
 *	The input is then sent back and returned as a MainMenu type through
 *	type casting.
 *************************************************************************/
AdminMenu AdminSelectionMenu();

/**************************************************************************
 * DisplayListSelectionMenu
 * 	This function will assign an orderded menu output into a variable, then
 *	it will call the CheckInput function to prompt and validate user input.
 *	The input is then sent back and returned as a MainMenu type through
 *	type casting.
 *************************************************************************/
DisplayListMenu DisplayListSelectionMenu();


//ProgramFunctions DisplayMainProgramMenu();
//



#endif /* HEADER_H_ */
