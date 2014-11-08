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

#include "../Header Files/PreprocessorDirectiveHeader.h"
#include "../Header Files/Class Header Files/AdminClassHeader.h"
#include "../Header Files/Header.h"

void AdminMain( CustomerList activatedList,
				CustomerList listOfPrevPurchasers,
				CustomerList deactivatedList,
				List<string> customerReviews,
				AdminMenu overrideSelection,
				bool overrideInput)
{

	// CLASS DECLARATION
	AdminMenu selection; // PROC: Admin's menu selection
	Admin Admin1;

	string userName;
	string email;
	long   accountNum;
	string password;
	char tryAgain;
	bool searchDeactivatedList = false;
	DisplayListMenu displaySelection;



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

					Admin1.addCustomer(activatedList,*someCustomer);



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

					Admin1.addCustomer(deactivatedList, *someCustomer);

					cout << "Done.\n";

			break;
		case SEARCH_AND_DISPLAY_CUSTOMER:

					// searches the activated list first. if not found, it will
					// search the deactivated list.
					cout << "Enter the name of the individual you would ";
					cout << "like to SEARCH: ";
					getline(cin,userName);

					try
					{

						cout << Admin1.displayCustomer(activatedList, userName);
						searchDeactivatedList = false;

					}
					catch(const EmptyList&)
					{
						searchDeactivatedList = true;

					}
					catch(const NotFound&)
					 {

						searchDeactivatedList = true;
					 }
					 catch(...)
					 {
						 cout << "Something went wrong... (inside catch all) \n";
						 searchDeactivatedList = true;
					 } // END TRY

					 if (searchDeactivatedList)
					 {
						 try
						{
							cout << Admin1.displayCustomer(deactivatedList, userName);
						}
						catch(const EmptyList&)
						{
							cout << "inside CATCH for EmptyList\n";

							tryAgain = CharCheck( " Empty... Try again? (Y/N): ",
										 'Y',
										 'N',
										  0);
							if (tryAgain == 'Y')
							{
								AdminMain(activatedList,
										listOfPrevPurchasers,
										deactivatedList,
										customerReviews,
										SEARCH_AND_DISPLAY_CUSTOMER,
										true);
							}
							else
							{
								overrideInput=false;
							}

						}
						catch(const NotFound&)
						 {
							 cout << "inside CATCH for NotFound\n";
							 tryAgain = CharCheck( " Not found... Try again? (Y/N): ",
											 'Y',
											 'N',
											  0);
							if (tryAgain == 'Y')
							{
								AdminMain(activatedList,
										listOfPrevPurchasers,
										deactivatedList,
										customerReviews,
										SEARCH_AND_DISPLAY_CUSTOMER,
										true);
							}
							else
							{
								overrideInput = false;
							}
						 }
						 catch(...)
						 {
							 cout << "Something went wrong... (inside catch all) \n";
							 tryAgain = CharCheck( " Not found... Try again? (Y/N): ",
											 'Y',
											 'N',
											  0);

							if (tryAgain == 'Y')
							{
								AdminMain(activatedList,
										listOfPrevPurchasers,
										deactivatedList,
										customerReviews,
										SEARCH_AND_DISPLAY_CUSTOMER,
										true);
							}
							else
							{
								overrideInput = false;
							}
						 } // END TRY
					 }
					 cout << "Done.\n";

			break;
		case REMOVE_ACTIVATED_CUSTOMER:
					cout << "Enter the name of the individual you would ";
					cout << "like to REMOVE: ";
					getline(cin,userName);

					try
					{
						// search a user in activated list...
						*someCustomer = Admin1.findCustomer(activatedList, userName);

						Admin1.moveCustomer(deactivatedList, activatedList, *someCustomer);

					}
					catch(const EmptyList&)
					{
						cout << "inside CATCH for EmptyList\n";

						tryAgain = CharCheck( " Empty List... Try again? (Y/N): ",
									 'Y',
									 'N',
									  0);

						if (tryAgain == 'Y')
						{
						AdminMain(activatedList,
								listOfPrevPurchasers,
								deactivatedList,
								customerReviews,
								REMOVE_ACTIVATED_CUSTOMER,
								true);
						}
						else
						{
							overrideInput = false;
						}
					}
					catch(const NotFound&)
					{
						cout << "inside CATCH for NotFound\n";

						tryAgain = CharCheck( " Not found... Try again? (Y/N): ",
									 'Y',
									 'N',
									  0);

						if (tryAgain == 'Y')
						{
						AdminMain(activatedList,
								listOfPrevPurchasers,
								deactivatedList,
								customerReviews,
								REMOVE_ACTIVATED_CUSTOMER,
								true);
						}
						else
						{
							overrideInput = false;
						}
					}
					catch(...)
					{
						cout << "Something went wrong... (inside catch all) \n";

						tryAgain = CharCheck( " Not found... Try again? (Y/N): ",
									 'Y',
									 'N',
									  0);

						if (tryAgain == 'Y')
						{
							AdminMain(activatedList,
									listOfPrevPurchasers,
									deactivatedList,
									customerReviews,
									REMOVE_ACTIVATED_CUSTOMER,
									true);
						}
						else
						{
							overrideInput = false;
						}
					}// END TRY

					cout << "Done.\n";

			break;
		case WIPE_DEACTIVATED_LIST:

					Admin1.wipeList(deactivatedList);
					cout << "Done.\n";

			break;
		case RECOVER_ACCIDENTAL_DELETION:

						cout << "Enter the name of the individual you would ";
						cout << "like to RESTORE to ACTIVATED: ";
						getline(cin,userName);

					try
					{
						// search a user in DEACTIVATED list
						*someCustomer = Admin1.findCustomer(deactivatedList,userName);

						// move the customer from deactivated to activated list
						Admin1.moveCustomer(activatedList,
											deactivatedList,
											*someCustomer);


					}
					catch(const EmptyList&)
					{
						cout << "inside CATCH for EmptyList\n";

						tryAgain = CharCheck( " Empty List... Try again? (Y/N): ",
									 'Y',
									 'N',
									  0);

						if (tryAgain == 'Y')
						{
							AdminMain(activatedList,
									listOfPrevPurchasers,
									deactivatedList,
									customerReviews,
									REMOVE_ACTIVATED_CUSTOMER,
									true);

						}
						else
						{
							overrideInput = false;
						}
					}
					catch(const NotFound&)
					{
						cout << "inside CATCH for NotFound\n";
						cout << "Failed to recover customer.\n";
						tryAgain = CharCheck( " Not found... Try again? (Y/N): ",
									 'Y',
									 'N',
									  0);
						if (tryAgain == 'Y')
						{
							AdminMain(activatedList,
									listOfPrevPurchasers,
									deactivatedList,
									customerReviews,
									REMOVE_ACTIVATED_CUSTOMER,
									true);

						}
						else
						{
							overrideInput = false;
						}
					}
					catch(...)
					{
						cout << "Something went wrong... (inside catch all) \n";
						tryAgain = CharCheck( " Not found... Try again? (Y/N): ",
									 'Y',
									 'N',
									  0);

						if (tryAgain == 'Y')
						{
							AdminMain(activatedList,
									listOfPrevPurchasers,
									deactivatedList,
									customerReviews,
									REMOVE_ACTIVATED_CUSTOMER,
									true);

						}
						else
						{
							overrideInput = false;
						}
					}// END TRY


					cout << "Done.\n";
			break;
		case MODIFY_HELP_OPTIONS:
					cout << "Coming soon...\n";
			break;
		case MODIFY_CUSTOMER_REVIEWS:
					cout << "Coming soon ... \n";
			break;
		case DISPLAY_A_LIST:

				displaySelection = DisplayListSelectionMenu();
				 while (displaySelection != LIST_EXIT)
				 {
					 switch (displaySelection)
					{
					 case LIST_ACTIVATED: 		activatedList.OutputList();
						 break;
					 case LIST_DEACTIVATED: 	deactivatedList.OutputList();
						 break;
					 case LIST_PREV_PURCHASERS: listOfPrevPurchasers.OutputList();
						 break;
					 case LIST_CUSTOMER_REVIEWS: cout << "Feature Coming Soon...\n";
						 break;
					}

					 displaySelection = DisplayListSelectionMenu();
				 }
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
