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

#include "ProductClassHeader.h"


Product::Product()
{
	cost 					= 0;
	productName				= " ";
	productDescription		= " ";
	modelNumber = 0;
	dateReleased = 0;
}

Product::~Product()
{

}

Product:: Product(float cost,
				 string name,
				 string description,
				 string specs,
				 int modelNum,
				 long date
				  )
{
	this->cost = cost;
	productName = name;
	productDescription = description;
	productSpecs = specs;
	modelNumber = modelNum;
	dateReleased = date;


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

