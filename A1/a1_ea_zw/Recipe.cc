#include "Recipe.h"

Recipe::Recipe(string n, string ing, string instr)
{
   name         = n;
   ingredients  = ing;
   instructions = instr;

}

string    Recipe::getName()         { return name; }
string    Recipe::getIngredients()  { return ingredients; }
string    Recipe::getInstructions() { return instructions; }

