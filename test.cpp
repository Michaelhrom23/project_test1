
/*
  test file
  Michael Romero
  Testing functions from dish.ccp
*/

#include "Dish.hpp"

int main(){
    Dish dish1; //calling an object

    dish1.setName("UNKNOWN"); //setting name

    dish1.getName(); //getting name

    dish1.setIngredients({}); //setting ingredients

    dish1.getIngredients(); //getting ingredients

    dish1.setPrepTime(30); //setting prep time

    dish1.getPrepTime(); //getting prep time

    dish1.setPrice(9.99); //setting dish price

    dish1.getPrice(); //asking for dish price

    dish1.setCuisineType(Dish::OTHER); //setting food type

    dish1.getCuisineType(); //getting food type
    dish1.display(); //displaying stats about food

    std:: cout << std ::endl; //new line

    std:: vector <std :: string> ingredients({"Pasta", "Eggs", "Pancetta", "Parmesan", "Pepper"});

    Dish dish2{"Pasta Carbonara", ingredients,20,12.50, Dish::ITALIAN}; //creating dish2 with object properties 
    dish2.display(); //displaying stats about food

    return 0;
}