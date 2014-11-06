/*
 * CustomerClassHeader.h
 *
 *  Created on: Nov 4, 2014
 *      Author: syndacit
 */

#ifndef CUSTOMERCLASSHEADER_H_
#define CUSTOMERCLASSHEADER_H_

#include "UserClassHeader.h"
#include "ProductClassHeader.h"
#include "List.h"

class Customer : public User
{
	public:
		Customer();
		// default constructor

		Customer(string userName,
				 string email,
				 long 	accountNum,
				 string password,
				 bool 	activate = false);
		// Nondefault constructor

		~Customer();
		// Deconstructor

		// Accessors
		Product viewPricesAndPackages(Product currentProductLine) const;
		// Returns the
		// Might want to reconsider this method with what annie is doing
		//	if the interface class

		Product 	orderRobots(Product currentProductLine);
		// Prompts user to input which product the want, it will be process
		//	and stored into the the user's purchase history and be recorded
		//	into the transaction history of the software for the
		//	administrator to utilize

		bool requestBrochure() const;


	private:
		List<string>  shoppingCart;
		string 		  testimonial;
		string 		  guaranteePolicy;
		List<Product> purchaseHistory;

};



#endif /* CUSTOMERCLASSHEADER_H_ */
