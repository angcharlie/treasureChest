//Charlie Ang 
//April 19, 2016
//CSC 2431 Spring 2016
//Assignment 2
//treasureChest.h

#ifndef treasureChest_H
#define treasureChest_H

//#include <string>
#include "boxType.h"	//treasureChest inherits from boxType

enum coin {gold = 25, silver = 10, copper = 1};		//enumerated type

class treasureChest : public boxType
{
public:
	//Default constructor
	//Postcondition: length = 0; width = 0; height = 0; pattern = ""
	treasureChest();

	//Constructor with parameters
	//Postcondition: length = l, width = w, double = h, maxCoins = max, pattern = str
	treasureChest(double l, double w, double h, int max, std::string str);

	//Destructor
	//Postcondition: free dynamically allocated memory
	~treasureChest();

	//Get max coins accessor
	//Postcondition: The maximum size of the chest is returned (num of coins)
	int getMaxCoins() const;

	//Get num coins accessor
	//Postcondition: The total num of coins is returned 
	int getNumCoins() const;

	//Adding treasure to the chest 
	//Postcondition: coin that is passed in is added to treasure chest 
	void addCoin(coin coinType);

	//Removing a voin from the treasure chest 
	//Postcondition: coin that is passed in is removed from treasure chest 
	void removeCoin(coin coinType);

	//Print coins in chest 
	//Postcondition: items in treasure chest are printed out
	void printCoins();

	//Setting pattern in treasureChest
	//Postcondition: sets pattern to passed in string
	void setPattern(std::string);

	//Getting pattern on treasureChest
	//Postcondition: returns pattern on treasure chest
	std::string getPattern() const;


private:
	coin *chest;	//keeps track of what's inside treasure chest 
	int maxCoins;	//
	int numCoins;	//

};

#endif