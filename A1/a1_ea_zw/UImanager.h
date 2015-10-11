#ifndef UIMANAGER_H
#define UIMANAGER_H

#include "Array.h"

#define TEST_MODE

class UImanager {
  public:
    void mainMenu(int*);
    void getRecipeData(Recipe*);
    void viewRecipe(Array*);
    void printRecipes(Array*);
    void pause();
  private:
    int getInt();
};

#endif

