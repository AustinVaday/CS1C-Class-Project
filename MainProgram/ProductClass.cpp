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

#include "ProductClass.h"

// Default constructor
Product::Product()
{
    cost 					= 0;
    productName				= " ";
    productDescription		= " ";
    modelNumber				= 0;
    dateReleased			= 0;
}

Product::Product(float  initCost,		// Starting cost of product
                 QString initName,		// Starting name of product
                 QString description,	// Description of the product
                 int 	modelNum,
                 int	initReleaseDate)
{
    cost                = initCost;
    productName         = initName;
    productDescription  = description;
    modelNumber         = modelNum;
    dateReleased        = initReleaseDate;

}


Product::~Product()
{
    // PLACE HOLDER FOR OUTPUTTING THE SPECIFICATIONS LIST OF EACH
    //	PRODUCT
}
void Product::changeCost(float newCost)
{
    cost = newCost;
}

void Product::changeName(QString newName)
{
    productName = newName;
}

void Product::changeDescription(QString description)
{
    productDescription = description;
}

float Product::getCost() const
{
    return cost;
}

QString  Product::getName() const
{
    return productName;
}

QString  Product::getDescription() const
{
    return productDescription;
}

int  Product::getModelNumber() const
{
    return modelNumber;
}

int  Product::getReleaseDate() const
{
    return dateReleased;
}

