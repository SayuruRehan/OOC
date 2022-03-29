#include <iostream>  //header files
#include <iomanip>
using namespace std;

class Date  //create class Date
{
private:  //private attributes
int day;
int month;
int year;

public:  //public attributes
void setDay(int d);    //setters
void setMonth(int m);
void setYear(int y);

int getDay();    //getters
int getMonth();
int getYear();
};

void Date::setMonth(int m)  //setmonth function
{
  month = m;
}

void Date::setYear(int y)  //setYear function
{
  year = y;
}

int Date::getDay()  //getDay function
{
  return day;
}

int Date::getMonth()  //getmonth function
{
  return month;
}

int Date::getYear()  //getYear function
{
  return year;
}

//client program
int main()
{
  //create an object
  Date d1;

  int md, mm, my;    //declaring variables

  cout<<"Input Day: ";    //user input
  cin>>md;
  cout<<"Input month: ";
  cin>>mm;
  cout<<"Input year: ";
  cin>>my;
  
  d1.setDay(md);
  d1.setMonth(mm);
  d1.setYear(my);

  cout <<setw(2)<<setfill('0')<<d1.getDay() <<"/"<<setw(2)<<setfill('0') << d1.getMonth() <<"/"<<setw(4)<<d1.getYear()<<endl;    //final output

  return 0;
}//end main