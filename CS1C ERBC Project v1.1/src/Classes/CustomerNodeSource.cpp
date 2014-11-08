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



#include "../../Header Files/Node Header Files/CustomerNode.h"

/**************************************************************************
 * Node Constructor
 * ------------------------------------------------------------------------
 * Initializes _next
 **************************************************************************/
CustomerNode::CustomerNode()
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
CustomerNode::~CustomerNode()
{
	delete _next;
}

/**************************************************************************
 * Orphan
 * ------------------------------------------------------------------------
 * Sets All pointers to NULL so when it is deleted it is not associated with
 * any other nodes.
 **************************************************************************/
void CustomerNode::Orphan()
{
	_next 	  = NULL;
	_previous = NULL;
}

/**************************************************************************
 * GetNext
 * ------------------------------------------------------------------------
 * Returns the next pointer
 **************************************************************************/
CustomerNode* CustomerNode::GetNext() const
{
	return _next;
}


CustomerNode* CustomerNode::GetPrevious() const
{
	return _previous;
}
/**************************************************************************
 * SetNext
 * ------------------------------------------------------------------------
 * Sets the _next pointer
 **************************************************************************/
void CustomerNode::SetNext(CustomerNode* next)
{
	_next = next;
}

void CustomerNode::SetPrevious(CustomerNode* newPrev)
{
	_previous = newPrev;
}

/**************************************************************************
 * SetData
 * ------------------------------------------------------------------------
 * Sets the data for the Node object
 **************************************************************************/
void CustomerNode::SetData(Customer newData)
{
	_data = newData;
}

/**************************************************************************
 * SetPointer
 * ------------------------------------------------------------------------
 * Sets the _next pointer to a pointer argument
 **************************************************************************/
void CustomerNode::SetPointer(CustomerNode* newPointer)
{
	_next = newPointer;
}

/**************************************************************************
 * GetData
 * ------------------------------------------------------------------------
 * Returns the data of the node
 **************************************************************************/
Customer CustomerNode::GetData() const
{
	return _data;
}

//string CustomerNode::OutputData() const
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
//

