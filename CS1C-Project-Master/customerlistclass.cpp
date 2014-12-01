#include "customerlistclass.h"
#include <QTextStream>
#include <QMessageBox>
#include "ExceptionHandlers.h"
#include "activatedlist2.h"
#include <QDebug>

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
    _listLimit = 100;
}


/**************************************************************************
 * D E S T R U C T O R
 * ------------------------------------------------------------------------
 * Destructs a list
 **************************************************************************/
CustomerList::~CustomerList()
{
        this->ClearList();
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
QString CustomerList::OutputList () const
{
    //D E C L A R A T I O N
    Node<Customer> * traverse;      //CALC - used to traverse the list
    QString  stringList;		   //OUT - used to store the content of the
                                    //	   list
    QTextStream out(&stringList);  //OUT - used to create a stream in which
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
//        out << "******************************************************************\n";

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
void CustomerList::ClearList()
{
    while(!isEmpty())
    {

qDebug() << "******Debugging: Deleting customer in list.******\n";

        Dequeue();
    }
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
<<<<<<< HEAD
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
      Node<Customer>*  _createNew;   //CALC - used to create dynamic memory

      //D E C L A R A T I O N S
      bool continueTraverse;
      Node<Customer>* _cursor;


     //Begin If only if the list is empty
     if(isEmpty())
     {
         //Creates new dynamic memory
         _createNew  = new Node<Customer>;

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
     else if(_nodeCount < _listLimit)
     {
         //I N I T I A L I Z A T I O N S
             _cursor          = _head;
             continueTraverse = true;
             //Creates new dynamic memory
             _createNew  = new Node<Customer>;

              //Sets the data of the newly created node
              _createNew->SetData(data);
             //This "if-statement" is designed to add a node when there is only ONE node currently in the list
             // *
              if(_cursor->GetNext() == NULL)
              {
                 if(_createNew->GetData().getUserName() < _cursor->GetData().getUserName())
                 {
                     _createNew->SetNext(_cursor);
                     _head = _createNew;

                 }
                 else
                 {
                     _createNew->SetPrevious(_cursor);
                     _cursor->SetNext(_createNew);
                     _tail = _createNew;
                 }
              }
              else
              {    _cursor = _cursor->GetNext();
                 //This loop is designed to traverse the current list and stop at a place to ensure
                 //the node is added to the list according to alphabetical order
                 while(_cursor != NULL && continueTraverse)
                 {
                     if((_createNew->GetData().getUserName() < _cursor->GetData().getUserName()))
                     {
                         continueTraverse = false;
                         _createNew->SetNext(_cursor);
                         _createNew->SetPrevious(_cursor->GetPrevious());
                         _cursor-> SetPrevious(_createNew);
                         _createNew->GetPrevious()->SetNext(_createNew);
                    }
                     else
                     {
                         _cursor = _cursor->GetNext();
                     }
                 }

                 if(continueTraverse)
                 {
                     _createNew->SetPrevious(_tail);
                     _tail->SetNext(_createNew);
                    _tail = _createNew;
                 }

              }




 //        //Creates a new Object and stores data within it


 //        _createNew->SetPrevious(_tail);


 //        //Sets the node affiliated with tail to the new object
 //        _tail->SetNext(_createNew);


 //        //tail now points to the newly created object
 //        _tail = _createNew;
 // //		cout << "\nAdding " << _createNew->GetData() << " to the list.\n";

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
=======
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
     Node<Customer>*  _createNew;   //CALC - used to create dynamic memory

     //D E C L A R A T I O N S
     bool continueTraverse;
     Node<Customer>* _cursor;


    //Begin If only if the list is empty
    if(isEmpty())
    {
        //Creates new dynamic memory
        _createNew  = new Node<Customer>;

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
    else if(_nodeCount < _listLimit)
    {
        //I N I T I A L I Z A T I O N S
            _cursor          = _head;
            continueTraverse = true;
            //Creates new dynamic memory
            _createNew  = new Node<Customer>;

             //Sets the data of the newly created node
             _createNew->SetData(data);
            //This "if-statement" is designed to add a node when there is only ONE node currently in the list
            // *
             if(_cursor->GetNext() == NULL)
             {
                if(_createNew->GetData().getUserName() < _cursor->GetData().getUserName())
                {
                    _createNew->SetNext(_cursor);
                    _head = _createNew;

                }
                else
                {
                    _createNew->SetPrevious(_cursor);
                    _cursor->SetNext(_createNew);
                    _tail = _createNew;
                }
             }
             else
             {    _cursor = _cursor->GetNext();
                //This loop is designed to traverse the current list and stop at a place to ensure
                //the node is added to the list according to alphabetical order
                while(_cursor != NULL && continueTraverse)
                {
                    if((_createNew->GetData().getUserName() < _cursor->GetData().getUserName()))
                    {
                        continueTraverse = false;
                        _createNew->SetNext(_cursor);
                        _createNew->SetPrevious(_cursor->GetPrevious());
                        _cursor-> SetPrevious(_createNew);
                        _createNew->GetPrevious()->SetNext(_createNew);
                   }
                    else
                    {
                        _cursor = _cursor->GetNext();
                    }
                }

                if(continueTraverse)
                {
                    _createNew->SetPrevious(_tail);
                    _tail->SetNext(_createNew);
                   _tail = _createNew;
                }

             }




//        //Creates a new Object and stores data within it


//        _createNew->SetPrevious(_tail);


//        //Sets the node affiliated with tail to the new object
//        _tail->SetNext(_createNew);


//        //tail now points to the newly created object
//        _tail = _createNew;
// //		cout << "\nAdding " << _createNew->GetData() << " to the list.\n";

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
>>>>>>> 98c3417152d179564a28b0b12a60cb0b01ab74d4

  }


/**************************************************************************
 * Dequeue
 * ------------------------------------------------------------------------
 * Removes the first node from the list
 **************************************************************************/
void CustomerList::Dequeue()
{
    Node<Customer>* temp;

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
    Node<Customer> * traversePtr;
    Node<Customer> * actionPtr;

    if(isEmpty())
    {
//		cout << "Can't Dequeue an empty list" << endl;
        throw EmptyList();
    }

    traversePtr = _head;
    int index = 0;

    while (index < _listLimit && traversePtr != NULL && !(traversePtr->GetData() == someCustomer))
    {

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

            //Decrements the _nodeCount
            DecrementCount();

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

            //Decrements the _nodeCount
            DecrementCount();

        }

    }

    if (index == _listLimit && traversePtr == NULL)
    {
        // throw exception class if not found.
        traversePtr = NULL;
        throw NotFound();
    }
}

Customer CustomerList::FindCustomer(QString userName)
{
    Node<Customer> * traversePtr;

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

   Customer* CustomerList::ReturnCustomerPtr(QString userName)
  {
      Node<Customer> * traversePtr;

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

       Customer *dataPtr = traversePtr->GetDataPtr();


          return dataPtr;
  }

int CustomerList::FindCustomerLocation (QString userName)
{
    Node<Customer> * traversePtr;

        if(isEmpty())
        {
            throw EmptyList();
        }

        // NEED TO MAKE SURE 2 ACCOUNT NUMBERS CANNOT BE THE SAME //
        traversePtr = _head;
        int index = 0;
        while (index < Size() && traversePtr !=NULL &&
                traversePtr->GetData().getUserName() != userName)
        {
            traversePtr = traversePtr->GetNext();

            index++;
        }
        if (traversePtr == NULL)
        {
            qDebug() << "12";
            // throw exception class if not found.
            throw NotFound();
        }

        return index;
}

Customer CustomerList::operator[](int index) const
{
    Node<Customer> * traversePtr;

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

        return traversePtr->GetData();


}


bool CustomerList::isExist(Customer someCustomer)
{
        Node<Customer> * traversePtr;

        qDebug() << "ooo0009";

        if(isEmpty())
        {
            return false;
        }
        qDebug() << "ooo00010";

        // NEED TO MAKE SURE 2 ACCOUNT NUMBERS CANNOT BE THE SAME //
        traversePtr = _head;
        int i = 0;
        qDebug() << Size() << _head;
        while (i < Size() && traversePtr !=NULL)
        {
            qDebug() << "outputting\n" << traversePtr->GetData().OutputData();
            qDebug() << "ooo11";



            if (someCustomer == traversePtr->GetData())
            {
                qDebug() << "ooo12";
                return true;
            }

            qDebug() << "ooo13";

            traversePtr = traversePtr->GetNext();
            qDebug() << "ooo14";

            i++;
        }
        qDebug() << "ooo11";

        if (traversePtr == NULL)
        {
            // throw exception class if not found.
            return false;
        }

        return true;
}

void CustomerList::SortList()
{
    int index;
    int temp;

    for(index = 1; index < Size(); index++)
    {
        temp = index;

//        while()
    }
}

Customer CustomerList::VerifyCustomer(QString userName, QString password)
{
   Node<Customer>* cursor;
   Customer        tempCustomer;
   QString         name;
   QString         pw;

   tempCustomer.setValues(" "," ",0," ");

   bool found;

   cursor = _head;
   found  = false;



   while(cursor != NULL && !found)
   {

        name = cursor->GetData().getUserName();
        pw   = cursor->GetData().getPassword();

       if((name == userName) && (pw == password))
       {
           tempCustomer = cursor->GetData();
           found = true;

       }
       else
       {
           cursor = cursor->GetNext();
       }
   }
    cursor = NULL;

   return tempCustomer;
}

CustomerList& CustomerList::operator=(const CustomerList& list)
{
        int index;
        Customer copyCustomer;
        index = 0;

//Before Assignment

qDebug() << "Line 590: Before CustomerLIst Assignment: " << this->OutputList();

this->ClearList();

// Only a temporary fix :( It's only adding to the queue not removing from it.
        if(!list.isEmpty())
        {
                for(index = 0; index < list.Size(); index++)
                {
                        copyCustomer =list[index];
                        this->Enqueue(copyCustomer);
                }

        }
// AFter
qDebug() << "Line 616: After CustomerLIst Assignment: " << this->OutputList();

        return *this;
}
