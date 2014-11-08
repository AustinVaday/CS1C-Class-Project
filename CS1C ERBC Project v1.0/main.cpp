/**************************************************************************
 * CS1C Class Project
 * -----------------------------------------------------------------------
 * Main Program
 * -----------------------------------------------------------------------
 * Version: 1.0
 * -----------------------------------------------------------------------
 * Programmers:
 *		Austin 	Vaday
 *		Anthony Ramirez
 *		Annie	Raichev
 *		Erik 	Karlsson
 *
 *************************************************************************/

#include "Header.h"
#include "AdminClassHeader.h"

/**************************************************************************
 *
 *************************************************************************/
int main()
{
	// CONSTANT DECLARATIONS

	// CLASS DECLARATIONS

	// VARIABLE DECLARATIONS
	MainMenu	userSelection;
	bool		exitProgram;
	 CustomerList activatedList;
	 CustomerList listOfPrevPurchasers;
	 CustomerList deactivatedList;
	 List<string> customerReviews;

	// INITIALIZATING
	exitProgram = false;

	// PROCESSES




	// FOUND IN ADMINCLASSHEADER.h
	AdminMain(activatedList,
				listOfPrevPurchasers,
				deactivatedList,
				customerReviews,
				ADMIN_EXIT, 		// dummy variables
				false);				// dummy variables.

	// WHEN PROGRAM STARTS GIVES LOGIN SCREEN


	// POINTER CLEAN UP IF NEEDED


	return 0;
}
