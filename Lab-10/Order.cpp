#include "Order.h"
#include <iostream>
using namespace std;

Order::Order(int pID, int size)
{
  orderID = pID;
  maxSize = size;
  count = 0;
  meals = new Meal[size];
}

void Order::addItem(int no, const char name[], double gPrice)
{
  if (count < maxSize)
  {
    meals[count].setDetails(no, name);
    meals[count].setPrice(gPrice);
    count++;
  }
  else
    cout << "Cannot enter anymore items..." << endl;
}

double Order::calTotalPrice()
{
  double total = 0;
  for (int i = 0; i < maxSize; i++)
    {
      total = total + meals[i]. getPrice();
    }
  return total;
}

Order::~Order()
{
  
}