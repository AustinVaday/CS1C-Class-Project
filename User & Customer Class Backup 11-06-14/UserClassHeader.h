/***************************************************************************
 * CS1C Project - User Class
 * ------------------------------------------------------------------------
 * v0.0.1
 * ------------------------------------------------------------------------
 * Programmers:
 * 		Austin 	Vaday
 * 		Anthony Ramirez
 * 		Annie	Raichev
 * 		Erik	Karlsson
 **************************************************************************/
#ifndef USERCLASSHEADER_H_
#define USERCLASSHEADER_H_

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;
/**********************************************************************
 * ^^^^^GUYS IMPORTANT NOTE!! WE NEED TO CONSOLIDATE ^^^^^^^
 * 		we need a main header file that holds all necessary includes,
 * 		headers and namespaces. WE NEED TO THINK EFFICIENT!
 ***********************************************************************/

class User
{

	public:
		User();
		// default

		User(string userName,
				string email,
				long accountNum,
				string password);

		~User();
		// deconstructor

		// Mutators
		bool operator == (const User otherUser);
		// Overloads the comparison operator to work between the classes

		void setUserName(string newUsterName);
		void setEmail(string newEmail);
		void setAccountNum(long newId);
		void setPassword(string newPassword);

		//Accessors
		string  getUserName() 	const;
		string  getEmail() 	 	const;
		long 	getAccountNum()	const;

	private:
		string 	userName;
		string 	userEmail;
		long	accountNum;
		string	userPassword;
		bool 	accountAccess;


};



#endif /* USERCLASSHEADER_H_ */
