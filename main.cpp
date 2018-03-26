/******************************************************************************
* AUTHORS    : Chris Burrell & Sebastian Hooshmand
* STUDENT ID : 1047448
* LAB #17    : Flo's Party Planner
* CLASS      : CS1A
* SECTION    : MW: 8am
* DUE DATE   : 3/26/18
*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

/******************************************************************************
 * Party Planner
 *-----------------------------------------------------------------------------
 *	This program will output which snack and beverage will be served to their
 *		friend
 *-----------------------------------------------------------------------------
 * INPUT:
 *    name : Guest's name
 *    age  : Guest's age
 *    choc : If they like chocolate
 *    nuts : If they like nuts
 *
 * OUTPUT:
 * 	  Guest's name, snack and drink
 *****************************************************************************/
int main()
{
	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * ------------------------------------------------------------------------
	 * PROGRAMMERS : Programmer's name
	 * CLASS       : Student's Course
	 * SECTION     : Class Days and Times
	 * LAB_NUM     : Lab Number (specific to this lab)
	 * LAB_NAME    : Title of the Lab
	 *************************************************************************/
	const char PROGRAMMERS []   = "Chris Burrell & Sebastian Hooshmand";
	const char CLASS[]          = "CS1A";
	const char SECTION []       = "MW: 8am-11:50am";
	const int  LAB_NUM          = 17;
	const char LAB_NAME[]       = "Flo's Party Planner";
	const int  OUT_WIDTH        = 30;
	const int  MAX_NAME         = 25;
	const int SNACK_CSTRING		= 20;
	const int BEVERAGE_CSTRING	= 15;
	const int NUMBER_OF_DRINKS  = 3;


	// variable declarations
	char name[MAX_NAME];
    int  age;
    char choc;
    char nuts;
    int  guestCount;
    int  skittleCount    = 0;
    int  mmCount         = 0;
	int  peanutMmCount   = 0;
	int  juiceCount      = 0;
    int  sodaCount       = 0;
	int  wineCount       = 0;
	int juiceCaseCount   = 0;
	int sodaCaseCount    = 0;
	int wineCaseCount    = 0;
	int skittleBagCount  = 0;
	int mmBagCount       = 0;
	int peanutMmBagCount = 0;
	char peanutMm[SNACK_CSTRING];
	char mm[SNACK_CSTRING];
	char skittles[SNACK_CSTRING];
	char juice[BEVERAGE_CSTRING];
	char soda[BEVERAGE_CSTRING];
	char wine[BEVERAGE_CSTRING];




	// OUTPUT - Class Heading
	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : "  << PROGRAMMERS << endl;
	cout << "*  "      << setw(14) << "CLASS"     << ": " << CLASS    << endl;
	cout << "*  "      << setw(14) << "SECTION"   << ": " << SECTION  << endl;
	cout << "*  LAB #" << setw(9)  << LAB_NUM     << ": " << LAB_NAME << endl;
	cout << "**************************************************\n\n";
	cout << right;

	/**************************************************************************
	 * INPUT - read's in the name and age of the user, and if they like
	 * chocolate and nuts
	 *************************************************************************/
	cout << left;

	cout << " Welcome Florence! Please input your guest's names, ages, and "
			"preferences!";


	for(guestCount = 1; guestCount < 13; guestCount = guestCount +1)
	{

		cout << endl;
		cout << endl;
		cout << "Guest " << '#' << guestCount << ':' << endl;
		cout << setw(OUT_WIDTH) << "What is your friend\'s name?";
		cin.getline(name, MAX_NAME);

		cout << setw(OUT_WIDTH) << "How old is your friend?";
		cin  >> age;

		cin.ignore(1000,'\n');

		cout << setw(OUT_WIDTH) << "Do they like chocolate (Y/N)?";
		cin.get(choc);


		cin.ignore(1000,'\n');


		if(choc == 'Y')
		{
			cout << setw(OUT_WIDTH) << "Do they like nuts (Y/N)? ";
			cin.get(nuts);
			cin.ignore(1000,'\n');
		}

		cout << endl;
		cout << right;



		/**********************************************************************
		 * PROCESSING - <Determines which snacks and drinks the guests want>
		 *********************************************************************/

		strncpy(peanutMm, "Peanut M & M\'s", SNACK_CSTRING);
		strncpy(mm, "M & M\'s", SNACK_CSTRING);
		strncpy(skittles, "Skittles", SNACK_CSTRING);
		strncpy(juice, " and juice.", BEVERAGE_CSTRING);
		strncpy(soda, " and soda.", BEVERAGE_CSTRING);
		strncpy(wine, " and wine.", BEVERAGE_CSTRING);


		cout << "You should serve " << name << " ";

			if(choc == 'Y')
			{
				if(nuts == 'Y')
				{
					cout << peanutMm;
					peanutMmCount = peanutMmCount + 1;
				}
				else
				{
					cout << mm;
					mmCount = mmCount + 1;
				}
			}
			else
			{
				cout << skittles;
				skittleCount = skittleCount + 1;
			}


			if(age <= 5)
			{
				cout << juice;
				juiceCount = juiceCount + 1;
			}
			else
			{
				if(age <= 20)
				{
					cout << soda;
					sodaCount = sodaCount + 1;
			    }
				else
				{
					cout << wine;
					wineCount = wineCount + 1;
				}
			}

			cout << endl << endl << endl;
	}

	    skittleBagCount = skittleCount / 4;

	    if(skittleCount % 4 > 0)
	    {
	    	skittleBagCount = skittleBagCount + 1;
	    }


	    peanutMmBagCount = peanutMmCount / 4;

	    if(peanutMmCount % 4 > 0)
	    {
	    	peanutMmBagCount = peanutMmBagCount + 1;
	    }


	    mmBagCount = mmCount / 4;

	    if(mmCount % 4 > 0)
	    {
	       	mmBagCount = mmBagCount + 1;
	    }

	    juiceCount = juiceCount * NUMBER_OF_DRINKS;

	    juiceCaseCount = juiceCount / 6;

	    if(juiceCount % 6 > 0)
	    {
	       	juiceCaseCount = juiceCaseCount + 1;
	    }

	    sodaCount = sodaCount * NUMBER_OF_DRINKS;

	    sodaCaseCount = sodaCount / 6;

	    if(sodaCount % 6 > 0)
	    {
	    	sodaCaseCount = sodaCaseCount + 1;
	    }

	    wineCount = wineCount * NUMBER_OF_DRINKS;

	    wineCaseCount = wineCount / 6;

	    if(wineCount % 6 > 0)
	    {
	    	wineCaseCount = wineCaseCount + 1;



	   }// end FOR


	/**********************************************************************
	* OUTPUT - User's snack and drink
	**********************************************************************/





	cout << left;
	cout << endl;
	cout << endl << "There are:" << endl;
	cout << skittleCount << " servings of Skittles" << endl;
	cout << mmCount << " servings of M & M's" << endl;
	cout << peanutMmCount << " servings of Peanut M & M's";
	cout << endl << endl << endl;
	cout << sodaCount << " servings of soda" << endl;
	cout << juiceCount << " servings of juice" << endl;
	cout << wineCount << " servings of wine";
	cout << endl << endl;

	cout << "Florence needs to purchase:" << endl;
	cout << setw(9) << "BAGS" << "SNACK" << endl;
	cout << setw(9) << "----" << "-----" << endl;
	cout << setw(9) << skittleBagCount << "Skittles" << endl;
	cout << setw(9) << mmBagCount << "M & M\'s" << endl;
	cout << setw(9) << peanutMmBagCount << "Peanut M & M\'s" << endl;
	cout << endl;
	cout << setw(9) << "CASES" << "BEVERAGE" << endl;
	cout << setw(9) << "-----" << "--------" << endl;
	cout << setw(9) << juiceCaseCount << "Juice" << endl;
	cout << setw(9) << sodaCaseCount << "Soda" << endl;
	cout << setw(9) << wineCaseCount << "Wine" << endl;
	cout << right;


	return 0;
}















































