//Lab10-Main program

#include <iostream>
#include "Meal.h"
#include "Order.h"
using namespace std;

int main()
{
  Order order1(1234, 3);

  order1.addItem(102, "Burger", 550.0);
  order1.addItem(114, "Sandwich", 390.0);
  order1.addItem(215, "Fish & Chips", 450.0);

  cout << "Total Price is: " << order1.calTotalPrice[] << endl;
}