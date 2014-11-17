#ifndef CUSTOMERLISTCLASS_H
#define CUSTOMERLISTCLASS_H

#include "customerclass.h"
#include "genericnodeclass.h"
#include "activatedlist.h"
/**************************************************************************
 * 							[L I S T ~ C L A S S]
 **************************************************************************/

class CustomerList
{
/**************************************************************************
 * P R I V A T E
 * ------------------------------------------------------------------------
 * The private section begins here
 **************************************************************************/
private:
    //M E M B E R ~ D E C L A R A T I O N S

    Node<Customer>*         _head;
    Node<Customer>*         _tail;
    Node<Customer>*         _ptr;
    int      		  	 	_nodeCount;
    int 			  		_listLimit;

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
    CustomerList();

    /**********************************************************************
     * D E S T R U C T O R
     * --------------------------------------------------------------------
     * Destructs a list
     **********************************************************************/
    ~CustomerList();
    /**********************************************************************
     * Enqueue
     * --------------------------------------------------------------------
     * Adds a node to the end of the list
     **********************************************************************/
    void Enqueue(Customer data);


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
    Customer Front() const;

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
     * This method will return a QString containing the list
     **********************************************************************/
    QString   OutputList() const;

//	CustomerNode* FindCustomer(Customer someCustomer) const;

    // overload
//	CustomerNode& operator[] (const int index);


    void RemoveCustomer(Customer &someCustomer);

    Customer FindCustomer(QString userName) ;
    QString operator[](int index);


};

//CustomerNode& CustomerList::operator[] (const int index)
//{
//
//	return _head[index];
//}
//





//CustomerNode* CustomerList::FindCustomer(Customer someCustomer) const
//{
//	CustomerNode * traversePtr;
//
//	traversePtr = _head;
//	int index = 0;
//	while (index < _listLimit && traversePtr != NULL)
//	{
//		// overloaded operator
//		if (traversePtr->GetData() == someCustomer)
//		{
//			return traversePtr;
//		}
//	}
//
//
//	if (index == _listLimit && traversePtr == NULL)
//	{
//		// throw exception class if not found.
//		traversePtr = NULL;
//		throw NotFound();
//	}
//
//
//
//}

#endif // CUSTOMERLISTCLASS_H
