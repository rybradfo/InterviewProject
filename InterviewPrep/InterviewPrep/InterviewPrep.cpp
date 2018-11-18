// InterviewPrep.cpp : This file contains the main function that builds the Iterview Prep home menu, and calls functions according to the user input
/*
Creator: Ryan Bradford
Date Created: 11/18/2018
Last Modified: 11/18/2018
*/
#include "Recursion.h"
#include <iostream>

//function used to handle recursion menu, reaches out to recursion.cpp which holds the actual functions
bool recursion()
{
	int selection = 0;
	while (selection<2 || selection>3)
	{
		std::cout << "You have Selected the Recurion categroy, here are your options: \n";
		std::cout << "Enter 1 for the fibonnaci functions\n";
		std::cout << "Enter 2 to return to the category menu\n";
		std::cout << "Enter 3 to exit completely\n";
		std::cin >> selection;
		if (selection == 1)
		{

		}
		else if (selection == 2)
		{
			std::cout << "Going back to the category menu\n";
			return false;
		}
		else if (selection == 3)
		{
			std::cout << "Thank you for visiting the Interview Prep, goodbye!\n";
			return true;
		}
		else
		{
			std::cout << "Invalid entry, please enter an integer from 1 to 5\n";
		}
	}

	return false;
}

//function used to handle the highest level menu
void categorySelection()
{
	int selection = 0;
	while (selection!=5) //until exit has been selected keep running the menu
	{
		std::cout << "Please Select the category of functions : \n";
		std::cout << "Enter 1 for Recursion\n";
		std::cout << "Enter 2 for dynamic programming\n";
		std::cout << "Enter 3 for BioInformatics\n";
		std::cout << "Enter 4 for Graph Theory\n";
		std::cout << "Enter 5 to exit\n";
		std::cin >> selection;
		if (selection == 1)
		{
			if (recursion()) //Only true if user selected to exit the program all together
			{
				return;
			}
			selection = 0; //Must have returned to category menu, reset selection to restart the menu
		}
		else if (selection == 2)
		{

		}
		else if (selection == 3)
		{

		}
		else if (selection == 4)
		{

		}
		else if (selection == 5)
		{
			std::cout << "Thank you for visiting the Interview Prep, goodbye!\n";
			return;
		}
		else
		{
			std::cout << "Invalid entry, please enter an integer from 1 to 5\n";
		}
	}
	return;
}

int main()
{
	std::cout << "Welcome to the InterviewPrep home page!\n";

	
}
