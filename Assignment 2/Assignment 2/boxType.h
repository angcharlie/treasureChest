//Charlie Ang 
//April 19, 2016
//CSC 2431 Spring 2016
//Assignment 2
//boxType.h

#ifndef boxType_H
#define boxType_H

#include <string>
#include "rectangleType.h"

class boxType : public rectangleType
{
public:
	//Default constructor
	//Postcondition: length = 0; width = 0; height = 0;
	boxType();

	//Constructor with parameters
	//Postcondition: length = l; width = w; height = h;
	boxType(double l, double w, double h, std::string);

	//Virtual destructor
	//Postcondition: deallocates dynamic memory
	virtual ~boxType();

	//Function to set the length, width, and height 
	//of the box.
	//Postcondition: length = l; width = w; height = h;
	void setDimension(double l, double w, double h);

	//Function to return the height of the box.
	//Postcondition: The value of height is returned. 
	double getHeight() const;
	
	//Function to return the surface area of the box.
	//Postcondition: The surface area of the box is 
	//                calculated and returned.
	double area() const;
	
	//Function to return the volume of the box. 
	//Postcondition: The volume of the box is 
	//               calculated and returned.
	double volume();
	
	//Function to output the length, width, and height of a box.
	//Postcondition: outputs length, width, and height 
	void print() const;

	//Set pattern mutator 
	//Postcondition: pattern = string
	void setPattern(std::string);

	//Get pattern accessor
	//Postcondition: The pattern of the boyType object is returned
	virtual std::string getPattern() const;


private:
	double height;
	std::string pattern; //2-D pattern printed on surface of boxType object 
};

#endif