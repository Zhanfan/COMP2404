#ifndef RECIPE_MANAGER_H
#define RECIPE_MANAGER_H

#include "defs.h"
#include "UImanager.h"
#include "Array.h"

class RecipeManager {
  public:
    RecipeManager();
    ~RecipeManager();
    void launch();
  private:
    UImanager* view;
    Array*     recipeArr;
    Recipe*    newRecipe;
};

#endif

