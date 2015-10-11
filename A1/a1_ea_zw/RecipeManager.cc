#include <iostream>
#include "RecipeManager.h"

using namespace std;

RecipeManager::RecipeManager()
{
  recipeArr = new Array();
  view = new UImanager();
}

RecipeManager::~RecipeManager()
{
  delete recipeArr;
  delete view;
  delete newRecipe;
}

void RecipeManager::launch()
{
  string str;
  int    choice;
  
  while (1) {
    choice = -1;
    view->mainMenu(&choice);
    if (choice == 0) {
      break;
    }
    else if (choice == 1) {
      newRecipe = new Recipe();
      view->getRecipeData(newRecipe);
      recipeArr->add(newRecipe);
    }
    else if (choice == 2) {
      view->printRecipes(recipeArr);
    }
    else if (choice == 3) {
      view->viewRecipe(recipeArr);
    }
    view->pause();
  }
}

