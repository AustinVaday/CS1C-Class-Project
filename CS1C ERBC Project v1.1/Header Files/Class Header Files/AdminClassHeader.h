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


#include "../List Header Files/CustomerList.h"
#include "CustomerClassHeader.h"
#include "../List Header Files/GenericList.h"
#include "../ExceptionHandlers.h"
#include "../Header.h"

void AdminMain( CustomerList activatedList,
				CustomerList listOfPrevPurchasers,
				CustomerList deactivatedList,
				List<string> customerReviews,
				AdminMenu overrideSelection,
				bool overrideInput);


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

		void addCustomer(CustomerList &list, Customer customerToAdd);
		//add a customer to the list of customers.

		void moveCustomer(CustomerList &list1,
							 CustomerList &list2,
							 Customer &customerToMove);

		void deleteCustomer(CustomerList &list, Customer &customerToDelete);

		void wipeList (CustomerList &list);
		// wipes out the whole list of deactivated customers.

		void modifyHelpOptions();
		// admin opportunity to modify help options


		void modifyCustomerReviews();
		 // allow the admin to access, delete, or modify any
		 // customer reviews.

		void displayList(CustomerList &list);

		Customer findCustomer(CustomerList &list, string userName);

		string displayCustomer(CustomerList &list, string userName);



	private:

};



#endif /* ADMINCLASSHEADER_H_ */


