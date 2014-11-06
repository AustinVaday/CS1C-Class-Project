/**************************************************************************
 * CS1C Class Project
 * -----------------------------------------------------------------------
 * AdminList2 Header
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

#ifndef ADMINLIST2_H_
#define ADMINLIST2_H_

#include "PreprocessorDirectiveHeader.h"

#include "AdminClassHeader.h"
#include "AdminNode2.h"

/**************************************************************************
 * 							[L I S T ~ C L A S S]
 **************************************************************************/

class AdminList
{
/**************************************************************************
 * P R I V A T E
 * ------------------------------------------------------------------------
 * The private section begins here
 **************************************************************************/
private:
	//M E M B E R ~ D E C L A R A T I O N S

	AdminNode*   _head;
	AdminNode*   _tail;
	int      	 _nodeCount;
	int 		 _listLimit;

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
	 * Constructs an object and initializes
	 **********************************************************************/
	AdminList();

	/**********************************************************************
	 * D E S T R U C T O R
	 * --------------------------------------------------------------------
	 * Destructs a list
	 **********************************************************************/
	~AdminList();
	/**********************************************************************
	 * Enqueue
	 * --------------------------------------------------------------------
	 * Adds a node to the end of the list
	 **********************************************************************/
	void Enqueue(Admin data);


	/**********************************************************************
	 * Dequeue
	 * --------------------------------------------------------------------
	 * Removes the first node from the list
	 **********************************************************************/
	void Dequeue();


	/**********************************************************************
	 * IncrementCount
	 * --------------------------------------------------------------------
	 * This method will increment the _nodeCount by one
	 **********************************************************************/
	void IncrementCount();

	/**********************************************************************
	 * DecrementCount
	 * --------------------------------------------------------------------
	 * This method will Decrement the _nodeCount by one
	 **********************************************************************/
	void DecrementCount();

//	/**********************************************************************
//	 * CreateObject
//	 * --------------------------------------------------------------------
//	 * This method will create an object and fill it with data
//	 **********************************************************************/
//	Node<Customer>* CreateObject( data);

	/**********************************************************************
	 * clearList
	 * --------------------------------------------------------------------
	 * This method will clear the entire list
	 ***********************************************************************/
	void ClearList();



/*********************
 * A C C E S S O R S *
 *********************/
	/**********************************************************************
	 * Front
	 * --------------------------------------------------------------------
	 * Returns the
	 **********************************************************************/
	string Front() const;

	/**********************************************************************
	 * Size
	 * --------------------------------------------------------------------
	 * This method will return the size of the list
	 **********************************************************************/
	int      Size() const;

	/**********************************************************************
	 * IsEmpty
	 * --------------------------------------------------------------------
	 * This method will check to see if the list is Empty
	 **********************************************************************/
	bool     isEmpty() const;

	/**********************************************************************
	 * isFull
	 * --------------------------------------------------------------------
	 * This method will check to see if the list is full
	 **********************************************************************/
	bool     isFull() const;

	/**********************************************************************
	 * OutputList
	 * --------------------------------------------------------------------
	 * This method will return a string containing the list
	 **********************************************************************/
	string   OutputList() const;
};

/**************************************************************************
 * List Constructor
 * ------------------------------------------------------------------------
 * This method will construct an object and initialize all object to 0;
 *************************************************************************/
AdminList::AdminList()
{
	_head      = NULL;
	_tail      = NULL;
	_nodeCount = 0;
	_listLimit = 30;
}

/**************************************************************************
 * D E S T R U C T O R
 * ------------------------------------------------------------------------
 * Destructs a list
 **************************************************************************/
AdminList::~AdminList()
{
	//Traverse list to delete
	delete _head;
}

/**************************************************************************
 * isFull
 * ------------------------------------------------------------------------
 * This method will check if the list is full and determine the amount of
 * nodes left in the list
 *************************************************************************/
bool AdminList::isFull() const
{
	return _nodeCount == _listLimit;
}


/**************************************************************************
 * IncrementCount
 * ------------------------------------------------------------------------
 * This method will increment the _nodeCount by one
 **************************************************************************/
void AdminList::IncrementCount()
{
	_nodeCount += 1;
}

/**************************************************************************
 * DecrementCount
 * ------------------------------------------------------------------------
 * This method will decrement the _nodeCount by one
 **************************************************************************/
void AdminList::DecrementCount()
{
	_nodeCount -= 1;
}

/**************************************************************************
 * OutputList
 * ------------------------------------------------------------------------
 * This method will return a string with the entire list
 **************************************************************************/
string AdminList::OutputList() const
{
	//D E C L A R A T I O N
	AdminNode * traverse; //CALC - used to traverse the list
	string  stringList;		   //OUT - used to store the content of the
							   //	   list
	ostringstream out;		   //OUT - used to create a stream in which
							   //	   the content of the list will be sent
							   //	   too

	//I N I T I A L I Z A T I O N S

	traverse = _head;	//Sets the traverse pointer to _head so _head
						//is not lost while traversing

	/**********************************************************************
	 * While Loop Iterates until traverse (which is initialized to _head)
	 * reaches NULL. Since this is a queue, the first node is output first
	 **********************************************************************/

	if(!isEmpty())
	{//Begin While


		cout << endl << "***Current Linked List***" << endl;
		cout << "******************************************************************\n";

		int index = 0;
		while(traverse != NULL)
		{

			cout << "List item #" << index + 1 << endl;
			cout << traverse->GetData().OutputData();
			//Sets the traverse pointer to the next node
			traverse = traverse->GetNext();
			index ++;
		}//End While

		cout << "******************************************************************\n";

	}
	else
	{
		cout << endl << "List is empty" << endl;

	}
	//Assign the string stream into the string variable
	stringList = out.str();

	traverse = NULL;
	return stringList;

}

/**************************************************************************
 * ClearList
 * ------------------------------------------------------------------------
 * This method Clears the entire list and points _head and _tail to NULL
 **************************************************************************/
void AdminList::ClearList()
{

	cout << endl << "***Clearing List***" << endl;
	delete _head;

	_head = NULL;
	_tail = NULL;

	_nodeCount = 0;


}

/**************************************************************************
 * Front
 * ------------------------------------------------------------------------
 * This method will return the first node in the list
 **************************************************************************/

 string AdminList::Front() const
{
	//What if the list is empty?
	return _head->GetName();
}


 //Not sure if I need this anymore


///**************************************************************************
// * CreateObject
// * ------------------------------------------------------------------------
// * This method will create an object and fill it with data
// **************************************************************************/
//template <class typeName>
//Node<typeName>* List<typeName>::CreateObject(typeName data)
//{
//	//D E C L A R A T I O N S
//	Node<typeName>*  _createNew;   //CALC - used to create dynamic memory
//
//	//Creates new dynamic memory
//	_createNew  = new Node<typeName>;
//
//	//Sets the data of the newly created node
//	_createNew->SetData(data);
//
//	//Returns a pointer
//	return _createNew;
//}

 /**************************************************************************
  * Enqueue
  * ------------------------------------------------------------------------
  * This method will allow the user to add a node to the queue. The list
  * will be limited to the size set in the constructor. If the user reaches
  * the limit, the Enqueue method will output an error message.
  **************************************************************************/
 void AdminList::Enqueue(Admin data)
 {
 	//D E C L A R A T I O N S
	 AdminNode* temp;
 		//D E C L A R A T I O N S
 	AdminNode*  _createNew;   //CALC - used to create dynamic memory


 	//Begin If only if the list is empty
 	if(isEmpty())
 	{
 		//Creates new dynamic memory
 		_createNew  = new AdminNode;

 		//Sets the data of the newly created node
 		_createNew->SetData(data);


 		//Creates a new Object and stores data within it
 	  //Assigns _head and _tail to the new object created in dynamic memory
 		_head = _createNew;
 		_tail = _createNew;

 //		cout << "\nAdding " << _createNew->GetData() << " to the list.\n";
 		//increments the _listCount
 		IncrementCount();
 	}
 	//Checks the current _nodeCount against the pre-set _listLimit and
 	//enters after the first node is added
 	else if(_nodeCount < _listLimit)
 	{
 		//Creates new dynamic memory
 		_createNew  = new AdminNode;

 				//Sets the data of the newly created node
 		_createNew->SetData(data);

 		//Creates a new Object and stores data within it


 		_createNew->SetPrevious(_tail);


 		//Sets the node affiliated with tail to the new object
 		_tail->SetNext(_createNew);


 		//tail now points to the newly created object
 		_tail = _createNew;
 //		cout << "\nAdding " << _createNew->GetData() << " to the list.\n";

 		//Increments the current Count
 		IncrementCount();

 	}
 	else
 	{
 		//Outputs error message
 		cout << endl << "**List has reached its max size**" << endl;
 	}

 	_createNew = NULL;

 }

/**************************************************************************
 * Dequeue
 * ------------------------------------------------------------------------
 * Removes the first node from the list
 **************************************************************************/
void AdminList::Dequeue()
{
	AdminNode* temp;

	if(isEmpty())
	{
		cout << "Can't Dequeue an empty list" << endl;
	}
	else
	{
		//Assigns temp to head
		temp  = _head;

	    _head = _head->GetNext();

	    //Decrements the _nodeCount
	    DecrementCount();


		//Calls Orphan to set all pointers to NULL
		temp->Orphan();
		delete temp;

		temp = NULL;
	}
}

/**************************************************************************
 * IsEmpty
 * ------------------------------------------------------------------------
 * This method will check to see if the list is Empty
 **************************************************************************/
bool AdminList::isEmpty() const
{
	return _head == NULL;
}

/**************************************************************************
 * Size
 * ------------------------------------------------------------------------
 * This method returns the size of the list
 **************************************************************************/
int AdminList::Size() const
{
	return _nodeCount;
}




#endif /* ADMINLIST2_H_ */
