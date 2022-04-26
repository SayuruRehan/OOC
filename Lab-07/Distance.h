#pragma once
class Distance
{
  private:  //private class
    int feet;
    float inches;
  
  public: //public class
    Distance(); //Default Constructor
    Distance(int ft, float in); //overloaded constructor
    void inputDistance();
    void printDistance();
    
    ~Distance(); //Destructor
};
