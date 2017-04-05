//Charlie Ang 
//April 19, 2016
//CSC 2431 Spring 2016
//Assignment 2
//rectangleType.cpp

#include <iostream>
#include "rectangleType.h"

//Constructor with parameters
//Postcondition: length = l; width = w;
rectangleType::rectangleType(double l, double w)
{
	setDimension(l, w);
}

//Default constructor
//Postcondition: length = 0; width = 0;
rectangleType::rectangleType()
{
	length = 0;
	width = 0;
}

//Function to set the length and width of the rectangle.
//Postcondition: length = l; width = w;
void rectangleType::setDimension(double l, double w)
{
	if (l >= 0)
		length = l;
	else
		length = 0;

	if (w >= 0)
		width = w;
	else
		width = 0;
}

//Function to return the length of the rectangle.
//Postcondition: The value of length is returned. 
double rectangleType::getLength() const
{
	return length;
}

//Function to return the width of the rectangle.
//Postcondition: The value of width is returned. 
double rectangleType::getWidth()const
{
	return width;
}

//Function to return the area of the rectangle.
//Postcondition: The area of the rectangle is 
//               calculated and returned.
double rectangleType::area() const
{
	return length * width;
}

//Function to return the perimeter of the rectangle.
//Postcondition: The perimeter of the rectangle is 
//               calculated and returned.
double rectangleType::perimeter() const
{
	return 2 * (length + width);
}

//Function to output the length and width of 
//the rectangle.
void rectangleType::print() const
{
	std::cout << "Length = " << length
		<< "; Width = " << width;
}

