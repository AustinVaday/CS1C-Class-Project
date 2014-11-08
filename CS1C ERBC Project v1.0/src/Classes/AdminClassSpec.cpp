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



#include "../../Header Files/AdminClassHeader.h"
#include "../../Header Files/Header.h"

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
			) : User(userName,email,accountNum,password)
{
//	User::setUserName(userName);
//	User::setEmail(email);
//	User::setAccountNum(accountNum); // should we make this in the class instead?????
//	User::setPassword(password);

//	activate = true;
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
void Admin::addCustomer(CustomerList &list, Customer customerToAdd)
{
	list.Enqueue(customerToAdd);
}


// move the customer from list 2 to list 1
void Admin::moveCustomer(CustomerList &list1,
						 CustomerList &list2,
						 Customer &customerToMove)
{

	// try and catch blocks or nahh??

//
//	try
//	{

			list2.RemoveCustomer(customerToMove);

			list1.Enqueue(customerToMove);
//	}
//	catch(const EmptyList&)
//	{
//		cout << "Inside CATCH for Empty List.\n";
//		cout << "Your second list is empty, cannot delete customer";
//		cout << "(Output some kind of pop-up window here)\n";
//	}
//	catch (const NotFound&)
//	{
//		cout << "Inside CATCH for not found.\n";
//		cout << "Cannot delete customer because not found in second list.\n";
//		cout << "(Output some kind of pop-up window here)\n";
//	}
//	catch(...)
//	{
//		cout << "Uhh, something went wrong. Bye bye\n";
//	}
}

void Admin::deleteCustomer(CustomerList &list,
							Customer &customerToDelete)
{
		// try and catch blocks or nahh??

		list.RemoveCustomer(customerToDelete);
}

/*
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
*/

// wipes out the whole list of deactivated customers.
void Admin::wipeList (CustomerList &list)
{
	list.ClearList();

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

 void Admin::displayList(CustomerList &list)
 {
//	 DisplayListMenu selection;
//
//	 selection = DisplayListSelectionMenu();
//	 while (selection != LIST_EXIT)
//	 {
//		 switch (selection)
//		{
//		 case LIST_CUSTOMERS: 		listOfCustomers.OutputList();
//			 break;
//		 case LIST_DEACTIVATED: 	deactivatedList.OutputList();
//			 break;
//		 case LIST_PREV_PURCHASERS: listOfPrevPurchasers.OutputList();
//			 break;
//		 case LIST_CUSTOMER_REVIEWS: cout << "Feature Coming Soon...\n";
//			 break;
//		}
//
//		 selection = DisplayListSelectionMenu();
//	 }

	 list.OutputList();
 }

 Customer Admin::findCustomer(CustomerList &list, string userName)
 {

	 return list.FindCustomer(userName);

	 /*
	 switch (listToSearch)
	 {
	 	 case BOTH_LISTS:

	 		 	 try
	 		 	 {
	 		 		 Customer someCustomer;
	 		 		 // return customer from activated list
	 				 cerr << userName;

	 				 someCustomer = listOfCustomers.FindCustomer(userName);
	 		 		 return someCustomer;
	 		 	 }
	 		 	 // if activated list is empty
	 		 	 catch(const EmptyList&)
	 		 	 {
	 				 cerr << userName;

	 		 		 cout << "In emtpy list catchhhh";
	 		 		 // recurse to check deactivated list
	 		 		 findCustomer(userName,DEACTIVATED_LIST);
	 		 	 }
	 		 	 catch (const NotFound&)
	 		 	 {
	 		 		 cout << "In not found catcchhhhh\n";
	 		 		 // recurse to check deactivated list
	 		 		 findCustomer(userName,DEACTIVATED_LIST);
	 		 	 }
	 		 break;

		 case ACTIVATED_LIST: return listOfCustomers.FindCustomer(userName);
			 break;

		 case DEACTIVATED_LIST:


			 cerr << userName;
			 return deactivatedList.FindCustomer(userName);
			 break;
	 }

	 */
 }

 string Admin::displayCustomer(CustomerList &list, string userName)
 {
	 Customer temp;

	 temp = findCustomer(list, userName);

	 return temp.OutputData();
 }
//Accessors
