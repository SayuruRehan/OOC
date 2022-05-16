#pragma once
#include "Meal.h"

class Order
{
private:
  int orderID;
  Meal* meals;
  int count;
  int maxSize;

public:
  Order(int pID, int size);
  void addItem(int no, const char name[], double gPrice);
  double calTotalPrice();
  ~Order();

};