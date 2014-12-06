#include "Productlistclass.h"
#include <QTextStream>
#include <QMessageBox>
#include "ExceptionHandlers.h"
#include "activatedlist2.h"
#include <QTextStream>
#include <QFile>
#include <QIODevice>
#include <QDir>


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
 *		Erik 	Karlssonm
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

/************************************************************
 * WriteToFile (Overloaded, DOES NOT allow to specify filePath)
 * --------------------------------------------------------------------------------
 * Returns true only if it successfully writes
 * Returns false if it fails to open, write or if there are
 *  no products in the list.
 * --------------------------------------------------------------------------------
 * File path is set when first establishing the database
 *************************************************************/
bool ProductList::WriteToFile()
{
    Node<Product>* _productPtr;
    QDir dataPath;
    bool writeSuccessFull;

    // This calls on QDir to return the path of the home folder of the user
    //  who executed the program then concatenates
    dataPath = QDir::home().path() + "/E.R.C.K/";

    // If the path doesn't exist, the program will create another, if it was lost during execution.
    if(!dataPath.exists())
    {
        dataPath.mkpath(dataPath.path());
    }

    // A QFile is the created or opeth.
    QFile productDataFile(dataPath.path() + "ProductData.txt");

    // Initialize write to false
    writeSuccessFull = false;

    if(productDataFile.open(QIODevice::ReadWrite | QIODevice::Text) && !isEmpty())
    {
qDebug() << "Debugging:: WRITE :::  It opened ::: ";
        QTextStream out(&productDataFile);

        _productPtr = _head;

        while(_productPtr != 0)
        {
            out << _productPtr->GetData().getName() << " 1 + \n";
            out << _productPtr->GetData().getDescription()  << " 2 + \n";
            out << _productPtr->GetData().getCost() << " 3 + \n";
            out << _productPtr->GetData().getModelNumber() << " 4 + \n";
            out << _productPtr->GetData().getReleaseDate() << " 5 + \n";
            _productPtr = _productPtr->GetNext();
        }

        writeSuccessFull = true;

    }

    productDataFile.flush();
    productDataFile.close();

    return writeSuccessFull;

}

/************************************************************
 * WriteToFile (Overloaded, allow to specify filePath)
 * --------------------------------------------------------------------------------
 * Returns true only if it successfully writes
 * Returns false if it fails to open, write or if there are
 *  no products in the list.
 * --------------------------------------------------------------------------------
 * File path is set when first establishing the database
 *************************************************************/
bool ProductList::WriteToFile(QString filePath)
{
    Node<Product>* _productPtr;
    QDir dataPath;
    bool writeSuccessFull;

    // This calls on QDir to return the path of the home folder of the user
    //  who executed the program then concatenates
    dataPath = ":/" + filePath;

    // If the path doesn't exist, the program will create another, if it was lost during execution.
    if(!dataPath.exists())
    {
        dataPath.mkpath(dataPath.path());
    }

    // A QFile is the created or opeth.
    QFile productDataFile(dataPath.path());

    // Initialize write to false
    writeSuccessFull = false;

    if(productDataFile.open(QIODevice::ReadWrite | QIODevice::Text) && !isEmpty())
    {
qDebug() << "Debugging:: WRITE :::  It opened ::: ";
        QTextStream out(&productDataFile);

        _productPtr = _head;

        while(_productPtr != 0)
        {
            out << _productPtr->GetData().getName() << " 1 + \n";
            out << _productPtr->GetData().getDescription()  << " 2 + \n";
            out << _productPtr->GetData().getCost() << " 3 + \n";
            out << _productPtr->GetData().getModelNumber() << " 4 + \n";
            out << _productPtr->GetData().getReleaseDate() << " 5 + \n";
            _productPtr = _productPtr->GetNext();
        }

        writeSuccessFull = true;

    }

    productDataFile.flush();
    productDataFile.close();

    return writeSuccessFull;

}


/************************************************************
 * ReadFile (Overloaded, DOES NOT allow to specify filePath)
 * --------------------------------------------------------------------------------
 * Returns true only if it successfully reads
 * Returns false if it fails to open, read or if there are no productss
 *      in the database
 * --------------------------------------------------------------------------------
 * File path is set when first establishing the database
 *************************************************************/
bool ProductList::ReadFile()
{
    QDir dataPath;
    bool readSuccessFull;

    // Initialize write to false
    readSuccessFull = false;

    // This calls on QDir to return the path of the home folder of the user
    //  who executed the program then concatenates
    dataPath = QDir::currentPath();

    // If the path doesn't exist, the program will create another, if it was lost during execution.
    if(!dataPath.exists())
    {
qDebug() << "Patch Exists: " << dataPath.exists();
    }

    // A QFile is the created or opened
    QFile productDataFile(dataPath.path() + "/ProductData.txt");

    // This checks if the file opens, if it does not, it will display an
    //  error message
    if(productDataFile.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        QString inputData[5];

        // Points Text stream to input file to read in.
        QTextStream inFile(&productDataFile);
        while(!inFile.atEnd() && !isFull())
        {
qDebug() << "Debugging:: Open Success :: Reading data...";

            // Name
            inputData[0] = inFile.readLine() + " 1 + ";
qDebug() << "Name: " << inputData[0];

            // Cost
            inputData[1] = inFile.readLine() + " 2 + ";
qDebug() << "Description: " << inputData[1];

            // Description
            inputData[2] = inFile.readLine() + " 3 + ";
qDebug() << "Cost: " << inputData[2];

            // Model Number
            inputData[3] = inFile.readLine() + " 4 + ";
qDebug() << "Model Number: " << inputData[3];

            // Date Released
            inputData[4] = inFile.readLine() + " 5 + ";
qDebug() << "Date Released: " << inputData[4];
            Product newProduct(inputData[0],inputData[1],inputData[2].toFloat(),inputData[3].toInt(),inputData[4].toInt());

            this->Enqueue(newProduct);

        }
        readSuccessFull = true;
    }

qDebug() << "Flush: " << productDataFile.flush();

productDataFile.close();

qDebug() << "Close: " << !productDataFile.isOpen();

    return readSuccessFull;

}

/************************************************************
 * ReadFile (Overloaded, ALLOWS to specify filePath)
 * --------------------------------------------------------------------------------
 * Returns true only if it successfully reads
 * Returns false if it fails to open, read or if there are no products
 *      in the database
 * --------------------------------------------------------------------------------
 * File path is set when first establishing the database
 *************************************************************/
bool ProductList::ReadFile(QString filePath)
{
    QDir dataPath;
    bool readSuccessFull;

    // Initialize write to false
    readSuccessFull = false;

    // This calls on QDir to return the path of the home folder of the user
    //  who executed the program then concatenates
    dataPath = QDir::currentPath();
qDebug() << "Current Path to application : " << QDir::currentPath();


// If the path doesn't exist, the program will create another, if it was lost during execution.
    if(!dataPath.exists(filePath))
    {
qDebug() << "Product File: " << dataPath.exists(filePath);
    }

    // A QFile is the created or opened
    QFile productDataFile(dataPath.path() + "/" + filePath);

qDebug() << "Product File Path : " << dataPath.path() << "";

    // This checks if the file opens, if it does not, it will display an
    //  error message
    if(productDataFile.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        QString inputData[5];

        // Points Text stream to input file to read in.
        QTextStream inFile(&productDataFile);
        while(!inFile.atEnd() && !isFull())
        {
qDebug() << "Debugging:: Open Success :: Reading data...";

            // Name
            inputData[0] = inFile.readLine();
qDebug() << "Name: " << inputData[0];

            // Cost
            inputData[1] = inFile.readLine();
qDebug() << "Description: " << inputData[1];

            // Description
            inputData[2] = inFile.readLine();
qDebug() << "Cost: " << inputData[2];

            // Model Number
            inputData[3] = inFile.readLine();
qDebug() << "Model Number: " << inputData[3];

            // Date Released
            inputData[4] = inFile.readLine();
qDebug() << "Date Released: " << inputData[4];
            Product newProduct(inputData[0],inputData[1],inputData[2].toFloat(),inputData[3].toInt(),inputData[4].toInt());

            this->Enqueue(newProduct);

        }

        readSuccessFull = true;

        qDebug() << "Flush: " << productDataFile.flush();

        productDataFile.close();

        qDebug() << "Close: " << !productDataFile.isOpen();
    }



    return readSuccessFull;

}
