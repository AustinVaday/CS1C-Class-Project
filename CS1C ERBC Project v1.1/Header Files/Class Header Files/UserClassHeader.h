/**************************************************************************
 * CS1C Class Project
 * -----------------------------------------------------------------------
 * User Class Header
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

#ifndef USERCLASSHEADER_H_
#define USERCLASSHEADER_H_

#include "../Header.h"

using namespace std;
class User
{

	public:
		User();
		// default

		User(string userName,
				string email,
				long accountNum,
				string password);

		void setValues(string userName,
				 string email,
				 long 	accountNum,
				 string password);

		~User();
		// deconstructor

		// Mutators
		bool operator &=(const User otherUser);
		// Overloading the equality operator **FOR SIMILARITY**


		bool operator ==(const User otherUser);
		// Overloading the equality operator **FOR ABSOLUTE EQUALITY**


		void setUserName(string newUsterName);
		void setEmail(string newEmail);
		void setAccountNum(long newId);
		void setPassword(string newPassword);

		//Accessors
		string  getUserName() 	const;
		string  getEmail() 	 	const;
		long 	getAccountNum()	const;
		string 	getPassword() const;
		bool 	getAccess() const;

		string  OutputData() const;

	private:
		string 	userName;
		string 	userEmail;
		long	accountNum;
		string	userPassword;
		bool 	accountAccess;


};




#endif /* USERCLASSHEADER_H_ */
