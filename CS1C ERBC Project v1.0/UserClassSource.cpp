/**************************************************************************
 * CS1C Class Project
 * -----------------------------------------------------------------------
 * UserClassSource
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

#include "Header.h"

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

User::~User()
{

}

void User:: setValues(string userName,
		 string email,
		 long 	accountNum,
		 string password)
{
	this->userName 		= userName;
	this->userEmail 	= email;
	this->accountNum 	= accountNum;
	this->userPassword 	= password;

}

void User::setAccountNum(long newId)
{
	accountNum = newId;
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

string User::getPassword() const
{
	return userPassword;
}


bool User::getAccess() const
{
	return accountAccess;
}
// Overloading the equality operator **FOR SIMILARITY**
bool User::operator &=(const User otherUser)
{
	bool same;

	same = false;

	// Compares names and account numbers, if either are the same it will
	//	throw a flag. We could compare objects completely but we don't want
	//	to throw a flag on a person who has the exact same password by
	//	some crazy chance.
	//

	if(	  otherUser.getAccountNum() == this->getAccountNum()
	   || otherUser.getUserName() 	== this->getUserName())
	{
		same = true;
	}

	return same;
}

// Overloading the equality operator **FOR ABSOLUTE EQUALITY**
bool User::operator ==(const User otherUser)
{
	bool same;

	same = false;

	// Compares names and account numbers, if either are the same it will
	//	throw a flag. We could compare objects completely but we don't want
	//	to throw a flag on a person who has the exact same password by
	//	some crazy chance.
	//

	if(	  otherUser.getAccountNum() == this->getAccountNum()
	   && otherUser.getUserName() 	== this->getUserName()
	   && otherUser.getAccountNum() == this->getAccountNum()
	   && otherUser.getPassword()   == this->getPassword())
	{
		same = true;
	}

	return same;
}

string  User::OutputData() const
{
	ostringstream oss;

	//clear the ostringstream prior to use
	oss.str("");

	oss << "........................................................\n";
	oss << "Data for: " <<  userName << endl;
	oss << "Email address: " << userEmail << endl;
	oss << "Account number: " <<  accountNum << endl;
	oss << "Password: " << userPassword << endl;
	oss << "........................................................\n";

	return oss.str();
}
