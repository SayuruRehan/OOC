#include <iostream>
#include <iomanip>
using namespace std;

class Date
{
private:
int day;
int month;
int year;

public:
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
int main()
{
  //create an object
  Date d1;

  int md, mm, my;

  cout<<"Input Day: ";
  cin>>md;
  cout<<"Input month: ";
  cin>>mm;
  cout<<"Input year: ";
  cin>>my;
  
  d1.setDay(md);
  d1.setMonth(mm);
  d1.setYear(my);

  cout <<setw(2)<<setfill('0')<<d1.getDay() <<"/"<<setw(2)<<setfill('0') << d1.getMonth() <<"/"<<setw(4)<<d1.getYear()<<endl;

  return 0;
}