#ifndef RECIPE_H
#define RECIPE_H

#include <iostream>
#include <string>

using namespace std;

#include "defs.h"

class Recipe {
  public:
    Recipe(string="", string="", string="");
    string  getName();
    string  getIngredients();
    string  getInstructions();

  private:
    string    name;
    string    ingredients;
    string    instructions;
};

#endif

