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

#include "../../Header Files/Class Header Files/ProductClassHeader.h"

// Default constructor
Product::Product()
{
	cost 					= 0;
	productName				= " ";
	productDescription		= " ";
	modelNumber				= 0;
	dateReleased			= 0;
}

Product::Product(float  cost,		// Starting cost of product
				 string name,		// Starting name of product
				 string description,	// Description of the product
				 int 	modelNum,
				 long 	date) 		// Specifications of the product
{

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

void Product::changeName(string newName)
{
	productName = newName;
}

void Product::changeDescription(string description)
{
	productDescription = description;
}

void Product::addSpec(string newSpec)
{

}

void Product::removeSpec()
{

}

void Product::modifySpec()
{

}

float Product::getCost() const
{
	return cost;
}

string  Product::getName() const
{
	return productName;
}

string  Product::getDescription() const
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


// Specifications Functions
void createSpecList()
{

}
