#include <iostream>
#include <string>
using namespace std;

#include "Array.h"

Array::Array() 
{ 
  size = 0;
  recipes = new Recipe*[MAX_RECIPES];
}

Array::~Array() 
{ 
  for (int i=0; i<getSize()-1; ++i) {
    delete recipes[i];
  }
  delete [] recipes;
}

int    Array::getSize()        { return size; }
Recipe Array::getRecipe(int i) { return *recipes[i]; }


void Array::add(Recipe* recipe)
{
  //cout << ".5" << endl;
  if (size == MAX_RECIPES)
    return;
  //cout << "1" << endl;
  int i = 0;
  while (i < size) {
  	//cout << "newRecipe: " << recipe->getName() << " recipe: " << getRecipe(i).getName() << i << endl;
    if (recipe->getName() < getRecipe(i).getName()) {
      break;
    }
    i++;
  } 
  //cout << "2" << endl;
  //cout << "i: " << i << " size: " << size << endl;
  for(int j=size; j>=i; j--) {

    recipes[j+1] = recipes[j];
    //cout << "j: " << j << endl;

  }
  //cout << "3" << endl;
  
  recipes[i] = recipe;
  
  //cout << "recipe added at i: " << getRecipe(i).getName() << endl;
  size++;
}

