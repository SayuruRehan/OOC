#include <iostream>    //header files
using namespace std;

class Date    //create class Date
{
private://private attributes
int day;
int month;
int year;

public://public attributes
void setDay(int d);
void setMonth(int m);
void setYear(int y);

int getDay();
int getMonth();
int getYear();
};

void Date::setMonth(int m)
{
  month = m;
}

void Date::setYear(int y)
{
  year = y;
}

int Date::getDay()
{
  return day;
}

int Date::getMonth()
{
  return month;
}

int Date::getYear()
{
  return year;
}

//client program
int main()    //begin main
{
  //create an object
  Date d1;

  d1.setDay(11);
  d1.setMonth(8);
  d1.setYear(2022);

  cout << d1.getDay() <<"/"<< d1.getMonth() <<"/"<<d1.getYear()<<endl;  //final output

  return 0;
}//end main