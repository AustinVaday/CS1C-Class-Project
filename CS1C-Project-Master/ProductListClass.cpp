#include "Productlistclass.h"
#include <QTextStream>
#include <QMessageBox>
#include "ExceptionHandlers.h"
#include "activatedlist2.h"
#include <QTextStream>
#include <QFile>
#include <QIODevice>


/***********************************************************************
 * CS1C Class Project
 * -----------------------------------------------------------------------
 * ProductListSource
 * -----------------------------------------------------------------------
 * Version: 0.0.1
 * -----------------------------------------------------------------------
 * Programmers:
 *		Austin 	Vaday
 *		Anthony Ramirez
 *		Annie	Raichev
 *		Erik 	Karlsson
 *
 **********************************************************************/


/**************************************************************************
 * List Constructor
 * ------------------------------------------------------------------------
 * This method will construct an object and initialize all object to 0;
 *************************************************************************/
ProductList::ProductList()
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
ProductList::~ProductList()
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
bool ProductList::isFull() const
{
    return _nodeCount == _listLimit;
}


/**************************************************************************
 * IncrementCount
 * ------------------------------------------------------------------------
 * This method will increment the _nodeCount by one
 **************************************************************************/
void ProductList::IncrementCount()
{
    _nodeCount += 1;
}

/**************************************************************************
 * DecrementCount
 * ------------------------------------------------------------------------
 * This method will decrement the _nodeCount by one
 **************************************************************************/
void ProductList::DecrementCount()
{
    _nodeCount -= 1;
}

/**************************************************************************
 * OutputList
 * ------------------------------------------------------------------------
 * This method will return a string with the entire list
 **************************************************************************/
QString ProductList::OutputList () const
{
    //D E C L A R A T I O N
    Node<Product> * traverse;       //CALC - used to traverse the list
    QString  stringList;			//OUT - used to store the content of the
                                    //	   list
    QTextStream out(&stringList);   //OUT - used to create a stream in which
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

//        out << endl << "***Current Linked List***" << endl;
//        out << "*************************************************************\n";

        int index = 0;
        while(traverse != NULL)
        {

            out << "List item #" << index + 1 << endl;


//            ui->listWidget->addItem(traverse->GetData().OutputData());
            out << traverse->GetData().OutputData();
            //Sets the traverse pointer to the next node
            traverse = traverse->GetNext();
            index++;
        }//End While

//        out << "******************************************************************\n";

    }
    else
    {
        out << endl << "List is empty" << endl;

    }


    traverse = NULL;
    return stringList;

}


/**************************************************************************
 * ClearList
 * ------------------------------------------------------------------------
 * This method Clears the entire list and points _head and _tail to NULL
 **************************************************************************/
void ProductList::ClearList()
{

//    cout << endl << "***Clearing List***" << endl;
    delete _head;

    _head = NULL;
    _tail    = NULL;

    _nodeCount = 0;


}

/**************************************************************************
 * Front
 * ------------------------------------------------------------------------
 * This method will return the first node in the list
 **************************************************************************/

 Product ProductList::Front() const
{
    //What if the list is empty?
    return _head->GetData();
}


 /**************************************************************************
  * Enqueue
  * ------------------------------------------------------------------------
  * This method will allow the user to add a node to the queue. The list
  * will be limited to the size set in the constructor. If the user reaches
  * the limit, the Enqueue method will output an error message.
  **************************************************************************/
 void ProductList::Enqueue(Product data)
 {
    //D E C L A R A T I O N S
 //	Node<typeName> * temp;
        //D E C L A R A T I O N S
     Node<Product>*  _createNew;   //CALC - used to create dynamic memory


    //Begin If only if the list is empty
    if(isEmpty())
    {
        //Creates new dynamic memory
        _createNew  = new Node<Product>;

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
        _createNew  = new Node<Product>;

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
        QMessageBox messageBox;
        messageBox.critical(0,"Error","**List has reached its max size**");
        messageBox.setFixedSize(500,200);
    }

    _createNew = NULL;

 }

/**************************************************************************
 * Dequeue
 * ------------------------------------------------------------------------
 * Removes the first node from the list
 **************************************************************************/
void ProductList::Dequeue()
{
    Node<Product>* temp;

    if(isEmpty())
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","**Cannot dequeue empty list**");
        messageBox.setFixedSize(500,200);
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
bool ProductList::isEmpty() const
{

    return _head == NULL;

}

/**************************************************************************
 * Size
 * ------------------------------------------------------------------------
 * This method returns the size of the list
 **************************************************************************/
int ProductList::Size() const
{
    return _nodeCount;
}

void ProductList::RemoveProduct(Product &someProduct)
{
    Node<Product> * traversePtr;
    Node<Product> * actionPtr;

    if(isEmpty())
    {
//		cout << "Can't Dequeue an empty list" << endl;
        throw EmptyList();
    }

    traversePtr = _head;
    int index = 0;

    while (index < _listLimit && traversePtr != NULL && !(traversePtr->GetData() == someProduct))
    {

        traversePtr = traversePtr->GetNext();
        index++;
    }

    // overloaded operator
            if (traversePtr->GetData() == someProduct)
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

Product ProductList::FindProduct(QString productName)
{
    Node<Product> * traversePtr;

        if(isEmpty())
        {
            throw EmptyList();
        }

        // NEED TO MAKE SURE 2 ACCOUNT NUMBERS CANNOT BE THE SAME //
        traversePtr = _head;
        int index = 0;
        while (index < _listLimit && traversePtr !=NULL &&
                traversePtr->GetData().getName() != productName)
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

QString ProductList::operator[](int index)
{
    Node<Product> * traversePtr;

        if(isEmpty())
        {
            throw EmptyList();
        }

        if (index > _listLimit)
        {
            throw OutOfRange();
        }


        // NEED TO MAKE SURE 2 ACCOUNT NUMBERS CANNOT BE THE SAME //
        traversePtr = _head;
        int i = 0;
        while (i < _listLimit && traversePtr !=NULL &&
                i != index)
        {
            traversePtr = traversePtr->GetNext();
            i++;
        }

        if (traversePtr == NULL)
        {
            // throw exception class if not found.
            traversePtr = NULL;
            throw NotFound();
        }

        return traversePtr->GetData().OutputData();


}

void ProductList::WriteToFile()
{
        QFile productFile(":/ProductDatabase.txt");

        if(productFile.open(QIODevice::ReadWrite))
        {
                QTextStream out(&productFile);

                out << "list[index].getUserName()\n";
                out << "list[index].getEmail()\n";
                out << "list[index].getAccountNum()\n";
                out << "list[index].getPassword()\n";

                productFile.close();
        }
}
