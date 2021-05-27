/*****************************************************
* Tim Loveland
* 5/23/21
* TEST FOR MAGVIEW
* User finds a unique substring within a string and 
* enters the position values of the substring.
* ****************************************************/
//Preprocessor Directives
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	//Define variables
	string start_string = { 'a', 'b', 'a', 'a', 'c', 'a', 'c', 'a', 'a', 'c', 'd', 'a' };
	int first_position{ 0 };
	int last_position{ 0 };

	//Explain program to user
	cout << "************************" << endl;
	cout << "*   Test for Magview   *" << endl;
	cout << "************************" << endl << endl;
	cout << "Please find the longest substring which contains \n";
	cout << "two unique characters in a given string.\n\n";
	
	//Display example string
	cout << "For example:" << endl;
	cout << "For string 'xfuiuiuif', \n";
	cout << "the longest substring with two unique characters would be : uiuiui \n\n";
	
	//Display substring directly under for more clarity
	cout << "Position space:    012345679" << endl;
	cout << "Original string:   xfuiuiuif" << endl;
	cout << "Longest substring:   uiuiui" << endl << endl;
	
	//Tell user how to find the position
	cout << "To find the substring: " << endl;
	cout << "Enter the position number for the *first* character of the substring: 2" << endl;
	cout << "Enter the position number for the *last* character of the substring: 7 \n\n";
	
	//Explain position numbers
	cout << "This substring starts at position 2 and ends at 7. \n\n";
	
	//Tell user to find unique substring for given string "abaac.."
	cout << "*************************************************************************************" << endl;
	cout << "* Please find the longest substring with two unique characters for the given string: " << endl;
	cout << "* String:   abaacacaacda" << endl;
	cout << "* Position: 0123456789..." << endl;
	cout << "************************************************************************************* \n\n";
	
	//Ask user to enter starting position for unique substring
	cout << "Please enter the first position space for the unique substring: ";
	//Validate that user enters a positive number
	while (!(cin >> first_position))
	{
		//Display error
		cout << "Error, please enter a number 0 - 11: ";
		//Clear previous input
		cin.clear();
		//Discard previous input
		cin.ignore(123, '\n');
	}
	
	//Ask user to enter the last position for unique substring
	cout << "Please enter the last position space for the unique substring: ";
	//Validate that user enters a positive number
	while (!(cin >> last_position))
	{
		//Display error
		cout << "Error, please enter a number 0 - 11: ";
		//Clear previous input
		cin.clear();
		//Discard previous input
		cin.ignore(123, '\n');
	}

	//Display the chosen substring based off first and last position entered in a for loop
	for (int i = first_position; i <= last_position; i++)
		cout << start_string[i];
	
	//Test to see if substring is the correct one
	if (first_position == 2 && last_position == 9)
	{
		//Show user they selected the right substring
		cout << "\n\n CORRECT: You entered substring 'aacacaac'";
		//Clear previous input
		cin.clear();
		//Discard previous input
		cin.ignore(123, '\n');
	}
	//Show user they entered wrong substring
	else
		cout << "\n\n INCORRECT - the correct substring is position 2 and 9 for: aacacaac \n\n";
	//Add spacing
	cout << endl << endl;

	return 0;
}
