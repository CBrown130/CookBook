/*
Caleb Brown
Recipe list manager
ingredient class definitions
*/

#pragma once

#include <string>
#include <iostream>

class Ingredient {
	
	private:
	
	std::string name;
	std::string quantity;
	
	public:
	
	Ingredient(){}
	Ingredient(std::string, std::string){}
	void printInfo(){}
	
	//get funtions
	std::string getName(){return name;}
	stdstring getQuantity(){return quantity;}
	
	//set functions
	void setName(std::string a){name = a;}
	void setQuantity(std::string a){quantity = a;}
	
	
};


