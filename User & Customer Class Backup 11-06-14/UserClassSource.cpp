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

#include"UserClassHeader.h"

// Default constructor
User::User()
{
	userName 		= " ";
	userEmail		= " ";
	accountNum 		= 0;
	userPassword 	= " ";
	accountAccess 	= false;
}

// Non default constructor
User::User(string name,
				 string email,
				 long 	acctNum,
				 string password)
{


	userName 		= name;
	userEmail 		= email;
	accountNum 		= acctNum;
	userPassword 	= password;

}

// Set name
void User::setUserName(string newUserName)
{
	userName = newUserName;
}

void User::setEmail(string newEmail)
{
	userEmail = newEmail;
}

void User::setPassword(string newPassword)
{
	userPassword = newPassword;
}

long User::getAccountNum() const
{
	return accountNum;
}

string User::getUserName() const
{
	return userName;
}

string User::getEmail() const
{
	return userEmail;
}

// Overloading the equality operator
bool User::operator ==(const User otherUser)
{
	bool different;

	different = true;

	// Compares names and account numbers, if either are the same it will
	//	throw a flag. We could compare objects completely but we don't want
	//	to throw a flag on a person who has the exact same password by
	//	some crazy chance.
	//

	if(	  otherUser.getAccountNum() == this->getAccountNum()
	   || otherUser.getUserName() 	== this->getUserName())
	{
		different = false;
	}

	return different;
}
