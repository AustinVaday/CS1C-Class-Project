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



#include "AdminClassHeader.h"
#include "Header.h"

// PREVENTS THE ARCHITECHURAL ERROR!!
//CustomerList Admin::listOfCustomers;
//CustomerList Admin::listOfPrevPurchasers;
//CustomerList Admin::deactivatedList;

//default
Admin::Admin()
{

	// initialize nothing because we have static vars
}

// non-default
Admin::Admin(string userName,
			  string email,
			  long accountNum,
			  string password
			)
{
	User::setUserName(userName);
	User::setEmail(email);
	User::setAccountNum(accountNum); // should we make this in the class instead?????
	User::setPassword(password);

	activate = true;
}

// destructor
Admin::~Admin()
{

}

//WHY U NEED THIS?????
string Admin::GetUserName()
{
	return getUserName();
}
string Admin::GetEmail()
{
	return getEmail();
}
long Admin::GetAccountNum()
{
	return getAccountNum();
}
string Admin::GetPassword()
{
	return getPassword();
}
bool Admin::activationStatus()
{
	return getAccess();
}

//Mutators

//add a customer to the list of customers.
// pass by value so a copy will be added to the list.
void Admin::addCustomer(Customer customerToAdd, bool activated)
{
	if (activated)
	{

		listOfCustomers.Enqueue(customerToAdd);
	}
	else
	{
		deactivatedList.Enqueue(customerToAdd);
	}
}


// search for the customer, remove the customer from the
// list of customers.
// If delete forever is false: add the customer to the deactivated
// list.
// If delete forever is true: delete forever.
void Admin::deleteCustomer(Customer &customerToDelete,
						    bool deleteForever)
{


	try
	{
		// delete forever
		if (deleteForever)
		{
			listOfCustomers.RemoveCustomer(customerToDelete);
		}
		// migrate user to deactivated list
		// remove from list of customers
		else
		{
			deactivatedList.Enqueue(customerToDelete);
			listOfCustomers.RemoveCustomer(customerToDelete);
		}
	}
	catch(const EmptyList&)
	{
		cout << "Inside CATCH for Empty List.\n";
		cout << "You have an empty list, cannot delete customer";
		cout << "(Output some kind of pop-up window here)\n";
	}
	catch (const NotFound&)
	{
		cout << "Inside CATCH for not found.\n";
		cout << "Cannot delete customer because not found.\n";
		cout << "(Output some kind of pop-up window here)\n";
	}
	catch(...)
	{
		cout << "Uhh, something went wrong. Bye bye\n";
	}
}



// searches the deactivated list. If finds customer, return
// true and add the customer back to the list of customers
// else, return false and do not do anything.
bool Admin::recoverCustomer(Customer &customerToRecover)
{
		try
		{
			// add to activated list
			listOfCustomers.Enqueue(customerToRecover);
			// remove from deactivated list
			deactivatedList.RemoveCustomer(customerToRecover);

		}
		catch(const EmptyList&)
		{
			cout << "Inside CATCH for Empty List.\n";
			cout << "You have an empty list, cannot delete customer";
			cout << "(Output some kind of pop-up window here)\n";
		}
		catch (const NotFound&)
		{
			cout << "Inside CATCH for not found.\n";
			cout << "Cannot delete customer because not found.\n";
			cout << "(Output some kind of pop-up window here)\n";
		}
		catch(...)
		{
			cout << "Uhh, something went wrong. Bye bye\n";
		}

}

// wipes out the whole list of deactivated customers.
void Admin::wipeDeactivatedList ()
{
	deactivatedList.ClearList();

}

// admin opportunity to modify help options

void Admin::modifyHelpOptions()
{

}


// allow the admin to access, delete, or modify any
// customer reviews.
 void Admin::modifyCustomerReviews()
 {

 }

 void Admin::displayLists()
 {
	 DisplayListMenu selection;

	 selection = DisplayListSelectionMenu();
	 while (selection != LIST_EXIT)
	 {
		 switch (selection)
		{
		 case LIST_CUSTOMERS: 		listOfCustomers.OutputList();
			 break;
		 case LIST_DEACTIVATED: 	deactivatedList.OutputList();
			 break;
		 case LIST_PREV_PURCHASERS: listOfPrevPurchasers.OutputList();
			 break;
		 case LIST_CUSTOMER_REVIEWS: cout << "Feature Coming Soon...\n";
			 break;
		}

		 selection = DisplayListSelectionMenu();
	 }

 }

 Customer Admin::findCustomerFromID(long accountNum)
 {

	return listOfCustomers.FindCustomer(accountNum);

 }

 string Admin::displayCustomer(long accountNum)
 {
	 Customer temp;

	 temp = findCustomerFromID(accountNum);

	 return temp.OutputData();
 }
//Accessors
