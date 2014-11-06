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

#ifndef ADMINNODE2_H_
#define ADMINNODE2_H_

#include "AdminClassHeader.h"
#include "UserClassHeader.h"

/**************************************************************************
 * 							[N O D E ~ C L A S S]
 **************************************************************************/

class AdminNode
{/**************************************************************************
 * P R I V A T E
 * ------------------------------------------------------------------------
 * The private section begins here
 **************************************************************************/
private:
	AdminNode*    _next;
	AdminNode*    _previous;
	Admin         _data;

/**************************************************************************
 * P U B L I C
 * ------------------------------------------------------------------------
 * The public section begins here
 **************************************************************************/
public:

/*******************
 * M U T A T O R S *
 *******************/
	/**********************************************************************
	 * C O N S T R U C T O R
	 * --------------------------------------------------------------------
	 * This is the Default constructor for the Node template
	 **********************************************************************/
	AdminNode();

	/**********************************************************************
	 * D E S T R U C T O R
	 * --------------------------------------------------------------------
	 * This is the Default constructor for the Node template
	 **********************************************************************/
	~AdminNode();

	/**********************************************************************
	 * SetData
	 * --------------------------------------------------------------------
	 * This template method is used to set the data within the node
	 **********************************************************************/
	void SetData(Admin _newData);

	/**********************************************************************
	 * SetPointer
	 * --------------------------------------------------------------------
	 * This template method is used to set pointer in node
	 **********************************************************************/
	void SetPointer(AdminNode* _newPointer);

	void SetNext(AdminNode* newNext);

	void SetPrevious(AdminNode* newPrev);

	void Orphan();

	string GetName();


/*********************
 * A C C E S S O R S *
 *********************/
	/**********************************************************************
	 * GetData
	 * --------------------------------------------------------------------
	 * This method will return the data in the node
	 **********************************************************************/
	Admin  GetData();

//	string OutputData() const;

	AdminNode* GetPrevious() const;

	AdminNode* GetNext() const;

};
/**************************************************************************
 * Node Constructor
 * ------------------------------------------------------------------------
 * Initializes _next
 **************************************************************************/
AdminNode::AdminNode()
{
	_next     = NULL;
	_previous = NULL;
//	_data     = "";
}

/**************************************************************************
 * D E S T R U C T O R
 * ------------------------------------------------------------------------
 * This is the Default constructor for the Node template
 **************************************************************************/
AdminNode::~AdminNode()
{
	delete _next;
}

/**************************************************************************
 * Orphan
 * ------------------------------------------------------------------------
 * Sets All pointers to NULL so when it is deleted it is not associated with
 * any other nodes.
 **************************************************************************/
void AdminNode::Orphan()
{
	_next 	  = NULL;
	_previous = NULL;
}

/**************************************************************************
 * GetNext
 * ------------------------------------------------------------------------
 * Returns the next pointer
 **************************************************************************/
AdminNode* AdminNode::GetNext() const
{
	return _next;
}


AdminNode* AdminNode::GetPrevious() const
{
	return _previous;
}
/**************************************************************************
 * SetNext
 * ------------------------------------------------------------------------
 * Sets the _next pointer
 **************************************************************************/
void AdminNode::SetNext(AdminNode* next)
{
	_next = next;
}

void AdminNode::SetPrevious(AdminNode* newPrev)
{
	_previous = newPrev;
}

/**************************************************************************
 * SetData
 * ------------------------------------------------------------------------
 * Sets the data for the Node object
 **************************************************************************/
void AdminNode::SetData(Admin newData)
{
	_data = newData;
}

/**************************************************************************
 * SetPointer
 * ------------------------------------------------------------------------
 * Sets the _next pointer to a pointer argument
 **************************************************************************/
void AdminNode::SetPointer(AdminNode* newPointer)
{
	_next = newPointer;
}

/**************************************************************************
 * GetData
 * ------------------------------------------------------------------------
 * Returns the data of the node
 **************************************************************************/
Admin AdminNode::GetData()
{
	return _data;
}

//friend ostream& operator << (ostream& output, AdminNode node)
// prob won't use this b/c can't cout in QT lol..

//string AdminNode::OutputData() const
//{
//	ostringstream oss;
//
//	//clear the ostringstream prior to use
//	oss.str("");
//
//	oss << "........................................................\n";
//	oss << "Data for: " <<  _data.getUserName() << endl;
//	oss << "Email address: " << _data.getEmail() << endl;
//	oss << "Account number: " <<  _data.getAccountNum() << endl;
//	oss << "Password: " << _data.getPassword() << endl;
//	oss << "........................................................\n";
//
//	return oss.str();
//}

string AdminNode::GetName()
{
	return _data.GetUserName();
}

#endif /* ADMINNODE2_H_ */
