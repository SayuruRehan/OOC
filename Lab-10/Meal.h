#pragma once

class Meal
{
private:
  int mealNo;
  char Description[20];
  double price;

public:
  Meal();
  void setDetails(int no, const char pDesc[]);
  void setPrice(double gPrice);
  double getPrice();
  ~Meal();
};