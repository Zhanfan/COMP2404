#ifndef ARRAY_H
#define ARRAY_H

#include "Recipe.h"

class Array
{
  public:
    Array();
    ~Array();
    void   add(Recipe*);
    Recipe getRecipe(int);
    int    getSize();
  private:
    int size;
    Recipe** recipes;
};

#endif
