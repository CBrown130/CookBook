/*
Caleb Brown
few function definitions for ingredient
*/


#include ingredient.h

	Ingredient::Ingredient(std::string nam, std::string quan){
		name = nam;
		quantity = quan;
	}

	void Ingredient::printInfo(){
		
		std::cout << quantity << " " << name;
		
	}