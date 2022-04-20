#pragma once
class Distance
{
  private:
    int feet;
    float inches;
  
  public:
    Distance(); //Default Constructor
    Distance(int ft, float in); //overloaded constructor
    void inputDistance();
    void printDistance();
    
    ~Distance(); //Destructor
};
