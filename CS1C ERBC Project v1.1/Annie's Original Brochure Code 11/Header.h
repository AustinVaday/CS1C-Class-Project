/**************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     :
 * ASSIGN #9: Templates
 **************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_


/**************************************************************************
 * 						H E A D E R ~ F I L E
 *************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;




enum BrochureFirstMenu
{
	EX, ALL, ONE
};
/**************************************************************************
 * OutputHeader
 * ------------------------------------------------------------------------
 * This function outputs the header to the console.
 *
 * RETURNS: No returns. Consists of cout statements
 **************************************************************************/
void OutputHeader(ostream&     out,     //OUT - used to determine where to
										//		send
				  const string NAME,    //OUT - Student name
				  const string CLASS,   //OUT - Class name
				  const string SECTION, //OUT - class time
				  const int    LAB_NUM, //OUT - Assignment or Lab number
				  const string LAB_NAME,//OUT - Assignment or Lab name
				  char asType			//CALC - either a for assign or
				  	  	  	  	  	  	//       for lab
				  );


/*********************************************************************
 * CreateMenu
 *   This function creates a menu that prompts the user for the six
 *   main function commands such that the user may see the commands'
 *   integer equivalents
 *
 * returns - > menu
 ********************************************************************/
string CreateMenu();

/************************************************************************
 * FirstRunMenu
 *   This function creates a menu for the first run (allowing them to
 *   initialize the objects for use or to terminate the program)
 *
 * returns - > menu
 ************************************************************************/
string FirstRunMenu();

/*************************************************************************
* GetAndCheckNumInput
*   This function prompts the user to enter a number, it then checks to
*   see if the input is an actual number and, if it is a number, then the
*   program checks to see if the number is within certain boundary values.
*   If the number is valid, the program outputs an error message and
*   allows the user to enter a new number until the number is valid.
*
* returns: a validated numeric input
 ***********************************************************************/
// Overloaded for integer numbers
int GetAndCheckNumInput(string PROMPT, 	      // IN - Prompt for int
				        int    lowerBound,    // IN - Lower Bound
				        int    upperBound);   // IN - Upper Bound

#endif /* HEADER_H_ */
