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



#ifndef CUSTOMERCLASSHEADER_H_
#define CUSTOMERCLASSHEADER_H_

#include "UserClassHeader.h"
#include "ProductClassHeader.h"

class Customer : public User
{
	public:
		Customer();
		// default constructor

		Customer(string userName,
				 string email,
				 long 	accountNum,
				 string password);
		// Nondefault constructor



		~Customer();
		// Deconstructor


		// Accessors
		// Product viewPricesAndPackages(Product currentProductLine) const;
		// Returns the
		// Might want to reconsider this method with what annie is doing
		//	if the interface class

		// Product orderRobots(Product currentProductLine);
		// Prompts user to input which product the want, it will be process
		//	and stored into the the user's purchase history and be recorded
		//	into the transaction history of the software for the
		//	administrator to utilize

		bool requestBrochure() const;


	private:

		bool activate;
};




#endif /* CUSTOMERCLASSHEADER_H_ */
