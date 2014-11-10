/**************************************************************************
 * CS1C Class Project
 * -----------------------------------------------------------------------
 * Product Class Header
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


#ifndef PRODUCTCLASSHEADER_H_
#define PRODUCTCLASSHEADER_H_

#include "../List Header Files/GenericList.h"

/**************************************************************************
 * Product Class
 * -----------------------------------------------------------------------
 * Product class will be used to store data of each current product that is
 * 	available for sale by Extreme Robot Cat Coderz. The class will
 *
 *************************************************************************/
class Product
{
	public:
		Product();
		// Default Constructor

		Product(float  cost,		// Starting cost of product
				string name,		// Starting name of product
				string description,	// Description of the product
//				string specs,
				int 	modelNum,
				 long 	date); 		// Specifications of the product

				/***********-> SPECIAL NOTE ABOUT SPECIFICATION <-*********
				*
				* Temporary:
				*	The string that will be passed into specifications will
				*	be required to have a special character to signify the
				*   separation of each specification
				*
				* Note from Erik:
				*	This is how we will be dealing with this for now, we
				*	might not even end up using this functionality. If that
				*	ends up being the case we will delete this portion of
				*	the code.
				*
				*	I would just rather be safe than sorry!
				*
				*
				*	"Why not just use an array or another linked list?"
				*			--Austin
				*
				**********-> SPECIAL NOTE ABOUT SPECIFICATION <-*********/

		// Non-default Constructor
		//	Pass in: Cost, name, description and the specifications

		~Product();
		// Deconstructor

		/*****************************************************************
		 * Mutators
		 ****************************************************************/

		void changeCost(float  newCost);
		// Changes cost of the product
		//	Passes in a new float value of product and modifies the
		//	cost member of the class.
		// Returns: Nothing

		void changeName(string newName);
		// Changes the name of the product.
		//	Passes in a new string to replace the productName string
		//	value of the class.
		// Returns: Nothing

		void changeDescription(string newDescription);
		// Changes the description of the product
		//	Passes in a new string to replace the productDescription
		//	string value of the class.
		// Returns: Nothing

		void addSpec(string newSpec);
		// Adds a new specification to the product
		//	Passes in a new string to add to the current list of
		//	specifications
		// Returns: Nothing

		void removeSpec();
		// Removes a specification from the product
		//	Will display all specifications of the product and the user
		//	can choose which specification that they want to remove.
		// Returns: Nothing

		void modifySpec();
		// Modifies one specification detail of the product
		//	Displays all current specifications of the product. Prompts
		//	the user to select which specification to modify and allows
		//	the user to enter a new specification as string.
		// Returns: Nothing


		/*****************************************************************
		 * Accessors
		 ****************************************************************/
		float getCost() const;
		// Returns the cost of the product

		string getName() const;
		// Returns the name of the product

		string getDescription() const;
		// Returns the description of the product

		string getSingleSpec(int specNumber) const;
		// Returns a single specification of the product
		//

		string getAllSpecs() const;
		// Returns the specifications of the product
		//	This method will return the specifications as a single string.

		int getModelNumber() const;
		// Returns the model number of the product
		//	This method will return the model number of the product as an
		//	integer

		int getReleaseDate() const;
		// Returns the date of release of the product
		//	This method will return an integer that represents the date
		//	the product was released to the public

	private:
		// Data members
		float		 cost;					// Cost of the product
		string  	 productName;			// Name of the product
		string		 productDescription;	// Description of the product
		List<string> productSpecs;	// A queue of the product's
											//	specifications
		int			 modelNumber;			// Model number of the product
		int			 dateReleased;			// Stores the date the product
											//	was released

		// Class Helper Function
		void createSpecList(string specification);
		// Creates the list of specifications
		//	User will pass in a string with the characters N$P to separate
		//	each spec from the next.
};


#endif /* PRODUCTCLASSHEADER_H_ */
