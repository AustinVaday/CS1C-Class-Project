/**************************************************************************
 * CS1C Class Project
 * -----------------------------------------------------------------------
 * CustomerListSource
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


#include "../Header Files/CustomerList.h"

/**************************************************************************
 * List Constructor
 * ------------------------------------------------------------------------
 * This method will construct an object and initialize all object to 0;
 *************************************************************************/
CustomerList::CustomerList()
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
CustomerList::~CustomerList()
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
bool CustomerList::isFull() const
{
	return _nodeCount == _listLimit;
}


/**************************************************************************
 * IncrementCount
 * ------------------------------------------------------------------------
 * This method will increment the _nodeCount by one
 **************************************************************************/
void CustomerList::IncrementCount()
{
	_nodeCount += 1;
}

/**************************************************************************
 * DecrementCount
 * ------------------------------------------------------------------------
 * This method will decrement the _nodeCount by one
 **************************************************************************/
void CustomerList::DecrementCount()
{
	_nodeCount -= 1;
}

/**************************************************************************
 * OutputList
 * ------------------------------------------------------------------------
 * This method will return a string with the entire list
 **************************************************************************/
string CustomerList::OutputList() const
{
	//D E C L A R A T I O N
	CustomerNode * traverse; //CALC - used to traverse the list
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
			index++;
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
void CustomerList::ClearList()
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

 Customer CustomerList::Front() const
{
	//What if the list is empty?
	return _head->GetData();
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
 void CustomerList::Enqueue(Customer data)
 {
 	//D E C L A R A T I O N S
 //	Node<typeName> * temp;
 		//D E C L A R A T I O N S
 		CustomerNode*  _createNew;   //CALC - used to create dynamic memory


 	//Begin If only if the list is empty
 	if(isEmpty())
 	{
 		//Creates new dynamic memory
 		_createNew  = new CustomerNode;

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
 		_createNew  = new CustomerNode;

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
void CustomerList::Dequeue()
{
	CustomerNode* temp;

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
bool CustomerList::isEmpty() const
{

	return _head == NULL;

}

/**************************************************************************
 * Size
 * ------------------------------------------------------------------------
 * This method returns the size of the list
 **************************************************************************/
int CustomerList::Size() const
{
	return _nodeCount;
}

void CustomerList::RemoveCustomer(Customer &someCustomer)
{
	CustomerNode * traversePtr;
	CustomerNode * actionPtr;

	if(isEmpty())
	{
//		cout << "Can't Dequeue an empty list" << endl;
		throw EmptyList();
	}

	traversePtr = _head;
	int index = 0;

cerr << "OUTSIDE WHILE\n";
	while (index < _listLimit && traversePtr != NULL && !(traversePtr->GetData() == someCustomer))
	{

cerr << "INSIDE WHILE\n";

		traversePtr = traversePtr->GetNext();
		index++;
	}

	// overloaded operator
			if (traversePtr->GetData() == someCustomer)
			{
				// head deletion
				if (traversePtr == _head)
				{
					Dequeue();

				}
				// end deletion
				else if (traversePtr == _tail)
				{
					_tail = _tail->GetPrevious();


					_tail->SetNext(NULL);
	//				_tail->_next = NULL;

					traversePtr->Orphan();

					delete traversePtr;

				}
				// middle deletion
				else
				{
	//				actionPtr = traversePtr->_previous;
					actionPtr = traversePtr->GetPrevious();

	//				actionPtr->_next = traversePtr->_next;
					actionPtr->SetNext(traversePtr->GetNext());

	//				traversePtr->_next->_previous = actionPtr;

					traversePtr->SetNext(traversePtr->GetNext());
					traversePtr->SetPrevious(actionPtr);

					traversePtr->Orphan();

					delete traversePtr;

				}

			}

	if (index == _listLimit && traversePtr == NULL)
	{
		// throw exception class if not found.
		traversePtr = NULL;
		throw NotFound();
	}
}

Customer CustomerList::FindCustomer(string userName)
{
		CustomerNode * traversePtr;

		if(isEmpty())
		{
			throw EmptyList();
		}

		// NEED TO MAKE SURE 2 ACCOUNT NUMBERS CANNOT BE THE SAME //
		traversePtr = _head;
		int index = 0;
		while (index < _listLimit && traversePtr !=NULL &&
				traversePtr->GetData().getUserName() != userName)
		{
			traversePtr = traversePtr->GetNext();

			index++;
		}
		if (traversePtr == NULL)
		{
			// throw exception class if not found.
			traversePtr = NULL;
			throw NotFound();
		}

		return traversePtr->GetData();

}
