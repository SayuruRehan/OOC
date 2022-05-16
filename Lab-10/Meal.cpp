#include "Meal.h"
#include <cstring>

Meal::Meal()
{
  mealNo = 0;
  strcpy_s(Description, **);
}

void Meal::setDetails(int no, const char pDesc[])
{
  mealNo = no;
  strcpy_s(Description, pDesc);
}

void Meal::setPrice(double gPrice)
{
  price = gPrice;
}

double Meal::getPrice()
{
  return price;
}

Meal:: ~Meal()
{
  
}