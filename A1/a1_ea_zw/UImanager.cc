#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstdlib>
#include "UImanager.h"

using namespace std;

void UImanager::mainMenu(int* choice)
{
  string str;

  *choice = -1;

  cout << "( 1 )  Add recipe" << endl;
  cout << "( 2 )  List all recipes" << endl;
  cout << "( 3 )  View recipe" << endl;
  cout << "( 0 )  Exit" << endl;

  while (*choice < 0 || *choice > 3) {
    cout << "Enter your selection:  ";
    *choice = getInt();
  }
}

void UImanager::getRecipeData(Recipe* recipe)
{
  string    str;
  string    name;
  string    ingredients;
  string    instructions;
  int       choice;

  cout << endl << "Enter recipe name:   ";
  getline(cin, name);

  cout << endl << "Enter ingredients (terminate with -1):   " << endl;
  getline(cin, str);
  while (str != "-1") {
    ingredients += "  ";
    ingredients += str += "\n";
    getline(cin, str);
  }

  cout << endl << "Enter instructions (terminate with -1):   " << endl;
  getline(cin, str);
  while (str != "-1") {
    instructions += "  ";
    instructions += str += "\n";
    getline(cin, str);
  }

  Recipe tmpRecipe(name, ingredients, instructions);
  *recipe = tmpRecipe;


}

void UImanager::printRecipes(Array *arr)
{
  cout << endl << endl << "LIST OF RECIPES:" << endl << endl;

  for (int i=0; i<arr->getSize(); ++i) {
    cout << "Name: " << arr->getRecipe(i).getName() << endl;
  }
}

void UImanager::viewRecipe(Array *arr)
{
  string name;
  int    i = 0;

  cout << endl << "Enter recipe name:   ";
  getline(cin, name);

  while(i<arr->getSize()){
    if (arr->getRecipe(i).getName() == name) {
      break;
    }
    i++;
  }
  if(i < arr->getSize()) {
    cout << "Name: " << arr->getRecipe(i).getName() << endl;
    cout << "Ingredients: " << arr->getRecipe(i).getIngredients() << endl;
    cout << "Instructions: " << arr->getRecipe(i).getInstructions() << endl;
  }else {
    cout << endl << "No recipe with that name :(" << endl;
  }

}

void UImanager::pause()
{
  string str;

  cout << endl << "\nPress enter to continue...";
  getline(cin, str);
}

int UImanager::getInt()
{
  string str;
  int    num;

  getline(cin, str);
  stringstream ss(str);
  ss >> num;

  return num;
}

