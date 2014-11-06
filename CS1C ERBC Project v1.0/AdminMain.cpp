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

#include "PreprocessorDirectiveHeader.h"
#include "AdminClassHeader.h"
#include "Header.h"

void AdminMain(AdminMenu overrideSelection, bool overrideInput)
{

	// CLASS DECLARATION
	AdminMenu selection; // PROC: Admin's menu selection
	Admin Admin1;

	string userName;
	string email;
	long   accountNum;
	string password;
//	bool deleteFound = true;



	Customer *someCustomer;

	if (!overrideInput)
	{
		selection = AdminSelectionMenu();
	}
	else
	{
		selection = overrideSelection;
	}

	while(selection != ADMIN_EXIT)
	{
		switch (selection)
		{
		case ADD_CUSTOMER_ACTIVATED:
					cout << "Enter in the customer's name: ";
					getline(cin,userName);

					cout << "Enter in the customer's email: ";
					getline(cin,email);
					// This should be randomly generated in the future
					accountNum = CheckInput("Enter in the customer's "
											"ID number: ",
											0, 99999999, 0);

					cout << "Enter in the customer's password: ";
					getline(cin,password);

					someCustomer = new Customer;

					someCustomer->setValues(userName,
											email,
											accountNum,
											password);

					// true means ACTIVATED customer
					Admin1.addCustomer(*someCustomer, true);



			break;
		case ADD_CUSTOMER_DEACTIVATED:
					cout << "Enter in the customer's name: ";
					getline(cin,userName);

					cout << "Enter in the customer's email: ";
					getline(cin,email);
					// This should be randomly generated in the future
					accountNum = CheckInput("Enter in the customer's "
											"ID number: ",
											0, 99999999, 0);

					cout << "Enter in the customer's password: ";
					getline(cin,password);

					someCustomer = new Customer;

					someCustomer->setValues(userName,
											email,
											accountNum,
											password);

					// false means DEACTIVATED customer
					Admin1.addCustomer(*someCustomer, false);

					cout << "Done.\n";

			break;
		case SEARCH_AND_DISPLAY_CUSTOMER:
					accountNum = CheckInput("Enter the account # of the "
												"individual you would "
													"like to search:",
													0, 99999999, 0);

					try
					{
						// remove customer, delete permanently: FALSE
						cout << Admin1.displayCustomer(accountNum);
					}
					catch(const EmptyList&)
					{
						cout << "inside CATCH for EmptyList\n";
						AdminMain(SEARCH_AND_DISPLAY_CUSTOMER, true);
					}
					catch(const NotFound&)
					 {

						 cout << "inside CATCH for NotFound\n";
						 AdminMain(SEARCH_AND_DISPLAY_CUSTOMER, true);
					 }
					 catch(...)
					 {
						 cout << "Something went wrong... (inside catch all) \n";
						 AdminMain(SEARCH_AND_DISPLAY_CUSTOMER, true);
					 } // END TRY

					 cout << "Done.\n";

			break;
		case REMOVE_ACTIVATED_CUSTOMER:
					accountNum = CheckInput("Enter the account # of the "
												"individual you would"
													"like to remove:",
													0, 99999999, 0);
//cerr << "\n ok1 \n";

					try
					{
//cerr << "\n ok2 \n";
						*someCustomer = Admin1.findCustomerFromID(accountNum);

//cerr << "\n ok3 \n";
					}
					catch(const EmptyList&)
					{
						cout << "inside CATCH for EmptyList\n";
						AdminMain(REMOVE_ACTIVATED_CUSTOMER, true);
					}
					catch(const NotFound&)
					{
						cout << "inside CATCH for NotFound\n";
						AdminMain(REMOVE_ACTIVATED_CUSTOMER, true);
					}
					catch(...)
					{
						cout << "Something went wrong... (inside catch all) \n";
						AdminMain(REMOVE_ACTIVATED_CUSTOMER, true);
					}// END TRY
//cerr << "\n ok4 \n";
//
//cerr << "\n ok5 \n";
					 // remove customer, delete permanently: FALSE
					Admin1.deleteCustomer(*someCustomer, false);
					cout << "Done.\n";

//cerr << "\n ok6 \n";
			break;
		case WIPE_DEACTIVATED_LIST:

					Admin1.wipeDeactivatedList();
					cout << "Done.\n";

			break;
		case RECOVER_ACCIDENTAL_DELETION:
					cout << "Coming soon ...\n";
			break;
		case MODIFY_HELP_OPTIONS:
					cout << "Coming soon...\n";
			break;
		case MODIFY_CUSTOMER_REVIEWS:
					cout << "Coming soon ... \n";
			break;
		case DISPLAY_A_LIST:
					Admin1.displayLists();
			break;
		case DISPLAY_A_CUSTOMER:
					cout << "Coming soon ... \n";
			break;
		} // END SWITCH

		if (!overrideInput)
		{
			selection = AdminSelectionMenu();
		}
		else
		{
			selection = overrideSelection;
		}
	} // END WHILE

}
