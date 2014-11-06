/**************************************************************************
 * CS1C Class Project
 * -----------------------------------------------------------------------
 * CustomerClassSource
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


#include "CustomerClassHeader.h"

Customer::Customer()
{
}

Customer::~Customer()
{

}
Customer::Customer(string userName,
		 string email,
		 long 	accountNum,
		 string password)
{
	User::setUserName(userName);
	User::setEmail(email);
	User::setAccountNum(accountNum);
	User::setPassword(password);
	activate = false;

}

//Customer::Customer()
//{
//
//}
