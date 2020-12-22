/*
Caleb Brown
Recipe header
for recipe management system
*/

#include ingredient.h
#include <vector>
#include <string>
#include <iostream>

class Recipe{
	
	private:
	std::string RecipeName;
	std::string description;
	vector<Ingredient*>* ingredients;
	vector<std::string>* instructions;
	
	Recipe(){
		vector<Ingredient*>* ingredients = new vector<Ingredient*>;
	}
	Recipe(std::string, std::string, vector<Ingredient*>, std::string){}
	~Recipe(){
		
		
	}
	
	
	public:
	
	
	//getter
	std::string getName(){ return RecipeName;}
	std::string getDescription(){ return description;}
	std:
	
	//setter

};





