//Charlie Ang 
//April 19, 2016
//CSC 2431 Spring 2016
//Assignment 2
//rectangleType.cpp

//#include <string>
#include <iostream>
#include "treasureChest.h"

//Default constructor
//Postcondition: length = 0; width = 0; height = 0; pattern = ""
treasureChest::treasureChest() : boxType()
{
	maxCoins = 0;
	numCoins = 0;

}

//Constructor with parameters
//Postcondition: length = l, width = w, double = h, maxCoins = max, pattern = str
treasureChest::treasureChest(double l, double w, double h, int max, std::string str) :boxType(l, w, h, str)
{
	if (str == "jolly roger" ||  str == "East India Company flag")	//flag restricted to two options
	{
		boxType::setPattern(str);
	}
	else
	{
		boxType:: setPattern("");
	}

	maxCoins = max;	//set max coins from passed in value 
	numCoins = 0;

	chest = new coin[numCoins];	//initialize array for num of coins
}

//Destructor
//Postcondition: free dynamically allocated memory
treasureChest::~treasureChest()
{
	delete[] chest;
}

//Get max coins accessor
//Postcondition: The maximum size of the chest is returned (num of coins)
int treasureChest::getMaxCoins() const
{
	return maxCoins;
}

//Get num coins accessor
//Postcondition: The total num of coins is returned 
int treasureChest::getNumCoins() const
{
	return numCoins;
}

//Adding treasure to the chest 
//Postcondition: coin that is passed in is added to treasure chest 
void treasureChest::addCoin(coin coinType)
{
	if (numCoins + 1 <= maxCoins)
	{
		//create temporary array to have one extra room for the new coin to be added 
		coin *tempCoin = new coin[numCoins + 1];

		for (int i = 0; i < numCoins; i++)	//copy everything from chest over into new array
		{
			tempCoin[i] = chest[i];
		}

		tempCoin[numCoins] = coinType;	//add new coin to end of array

		delete[] chest;	//delete (deallocate previous chest)

		chest = tempCoin;	//make chest equal to temp coin

		numCoins++;
	}
}

//Removing a voin from the treasure chest 
//Postcondition: coin that is passed in is removed from treasure chest 
void treasureChest::removeCoin(coin coinType)
{
	for (int i = 0; i < numCoins; i++)
	{
		if (chest[i] == coinType)
		{
			coin *tempCoin = new coin[numCoins - 1];	//size is one less since removing a coin
			for (int j = 0; j < i; j++)
			{
				tempCoin[j] = chest[j];	//copy everything into tempCoin...excluding the element to be removed
			}
			for (int k = i + 1; k < numCoins; k++)
			{
				tempCoin[k - 1] = chest[k];	//copy everything after the element to be removed
			}

			delete[] chest;	//delete chest

			chest = tempCoin;

			numCoins--;

			break;	//break out of for loop
		}
	}
}

//Print coins in chest 
//Postcondition: items in treasure chest are printed out
void treasureChest::printCoins()
{
	for (int i = 0; i < numCoins; i++)	//print out each individual coin one by one 
	{
		std::cout << chest[i] << std::endl;
	}
}


//Setting pattern in treasureChest
//Postcondition: sets pattern to passed in string
void treasureChest::setPattern(std::string str)
{
	if (str == "jolly roger" || str == "East India Company flag")	//flag restricted to two options
	{
		boxType::setPattern(str);
	}
}

//Getting pattern on treasureChest
//Postcondition: returns pattern on treasure chest
std::string treasureChest::getPattern() const
{
	return "Ahoy matey, this chest be marked with the " + boxType::getPattern();
}