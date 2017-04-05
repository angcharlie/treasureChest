//Charlie Ang 
//April 19, 2016
//CSC 2431 Spring 2016
//Assignment 2
//boxType.cpp

#include <iostream>
#include "rectangleType.h"
#include "boxType.h"

//Default constructor
//Postcondition: length = 0; width = 0; height = 0;
boxType::boxType() 
{
	height = 0.0;
	pattern = "";	//default pattern is empty string
}

//Constructor with parameters
//Postcondition: length = l; width = w; height = h;
boxType::boxType(double l, double w, double h, std::string str)
: rectangleType(l, w)
{
	if (h >= 0)
		height = h;
	else
		height = 0;

	pattern = str;	//sets pattern to passed in str
}

//Virtual destructor
//Postcondition: deallocates dynamic memory
boxType::~boxType()
{

}

//Function to set the length, width, and height 
//of the box.
//Postcondition: length = l; width = w; height = h;
void boxType::setDimension(double l, double w, double h) 
{
	rectangleType::setDimension(l, w);

	if (h >= 0)
		height = h;
	else
		height = 0;
}

//Function to return the height of the box.
//Postcondition: The value of height is returned. 
double boxType::getHeight() const
{
	return height;
}

//Function to return the surface area of the box.
//Postcondition: The surface area of the box is 
//                calculated and returned.
double boxType::area() const
{
	return  2 * (getLength() * getWidth()
		+ getLength() * height
		+ getWidth() * height);
}

//Function to return the volume of the box. 
//Postcondition: The volume of the box is 
//               calculated and returned.
double boxType::volume() 
{
	return getLength()*getWidth()*height;
}

//Function to output the length, width, and height of a box.
//Postcondition: outputs length, width, and height 
void boxType::print() const
{
	rectangleType::print();
	std::cout << "; Height = " << height;
}

//Set pattern mutator 
//Postcondition: pattern = string
void boxType::setPattern(std::string str)
{
	pattern = str;
}


//Get pattern accessor
//Postcondition: The pattern of the boyType object is returned
std::string boxType::getPattern() const
{
	return pattern;
}

