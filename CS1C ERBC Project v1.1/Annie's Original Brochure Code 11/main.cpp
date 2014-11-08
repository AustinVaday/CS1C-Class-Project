
#include "Header.h"
#include "List.h"
#include "Node.h"
#include "ProductClassHeader.h"
/**************************************************************************
 *
 * ------------------------------------------------------------------------
 * INPUT
 *
 *
 * OUTPUT
 *
 *
 **************************************************************************/

/***************************************************************************
 * C O N S T A N T S ~ U S E D
 * ------------------------------------------------------------------------
 * CONST
 * CONST
 * CONST
 **************************************************************************/
int main()
{
	Product robo(100000, "MeowBomb", "Blow up and say meow with cat smoke",
				"500 meow power bomb", 12, 66);

	int intChoice;				//IN & CALC - Users menu choice as int
								//    (corresponds to userMenuChoice)
	MenuOptions userMenuChoice;	//CALC -      Users menu choice
								//            as its enum value
	FirstOptions choice;
	string menu;

	//initialize
	userMenuChoice = COST;


	//PROCESS - error checks the integer input from user, and assigns a
	//			valid input into intChoice
	intChoice = GetAndCheckNumInput(FirstRunMenu(), 0, 2);

	// PROCESSING - Type cast number to Menu Option
	choice = FirstOptions(intChoice);

		//PROCESS: Loops until the user enters a 0 to exit the program
		while(userMenuChoice != EXIT || choice !=EX)
		{
			//PROCESS: Double spaces between menu choice and menu proces
			cout << endl;

			// PROCESSING - Used to select function action based on user input
			if(choice == ALL)
			{
				//output all robots info
				cout << "outputting all robots info!, will iterate through list later\n\n";
			}
			else
			{
				//PROCESS - error checks the integer input from user, and assigns a
				//			valid input into intChoice
				intChoice = GetAndCheckNumInput(CreateMenu(), 0, 5);

				// PROCESSING - Type cast intChoice to Menu Option
				userMenuChoice = MenuOptions(intChoice);

				switch(userMenuChoice)
				{
				case COST: cout << "The cost is: " << robo.getCost() << endl;
					break;
				case DESC: cout << robo.getDescription() << endl;
					break;
//				case SPECS: cout << robo.getAllSpecs() << endl;
//					break;
				case MODEL: cout << robo.getModelNumber() << endl;
					break;
				case DATE: cout << robo.getReleaseDate() << endl;
					break;
				default:	"-->CrAzY ErRoRs! \n";
				}
			}

		// GetAndCheckNumInput - Stores valid input into intChoice
		intChoice = GetAndCheckNumInput(FirstRunMenu(), 0, 2);

		// PROCESSING - Type cast intChoice to Menu Option
		choice = FirstOptions(intChoice);

		}


	return 0;
}
