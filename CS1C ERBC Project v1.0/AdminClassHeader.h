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

#ifndef ADMINCLASSHEADER_H_
#define ADMINCLASSHEADER_H_


#include "CustomerList.h"
#include "CustomerClassHeader.h"
#include "GenericList.h"
#include "ExceptionHandlers.h"

class Admin : public User
{
	public:
		Admin();
		//default

		Admin(string userName,
			  string email,
			  long accountNum,
			  string password
			 );
		// non-default
		~Admin();

		string GetUserName();
		string GetEmail();
		long GetAccountNum();
		string GetPassword();
		bool activationStatus();



		//Mutators

		void addCustomer(Customer customerToAdd, bool activated);
		//add a customer to the list of customers.

		void deleteCustomer(Customer &customerToDelete, bool deleteForever);
		// search for the customer, remove the customer from the
		// list of customers.
		// If delete forever is false: add the customer to the deactivated
		// list.
		// If delete forever is true: delete forever.

		bool recoverCustomer(Customer &customerToRecover);
		// searches the deactivated list. If finds customer, return
		// true and add the customer back to the list of customers
		// else, return false and do not do anything.

		void wipeDeactivatedList ();
		// wipes out the whole list of deactivated customers.

		void modifyHelpOptions();
		// admin opportunity to modify help options


		void modifyCustomerReviews();
		 // allow the admin to access, delete, or modify any
		 // customer reviews.

		void displayLists();
		// menu with sub-options to select which menu to display

		//Accessors

		Customer findCustomerFromID(long accountNum);

		string displayCustomer(long accountNum);
		 /*
		  *  NOTE: Perhaps template usage is best for the following
		  *  two methods. But I will do this for simplicity
		  */
//		bool displayCustomerList(List<Customer> list) const;
//		bool displayStringList(List<string> list) const;
		// generic display for a list of strings.


	private:
		 CustomerList listOfCustomers;
		 CustomerList listOfPrevPurchasers;
		 CustomerList deactivatedList;
		List<string> customerReviews;
		 //**==**HELP CLASS HERE**==** ...
		 	//helpClass helpOptions
		 bool activate;
};



#endif /* ADMINCLASSHEADER_H_ */


