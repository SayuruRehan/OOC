#include <iostream>
using namespace std;

int main()   //begin main
{
  float num1;    //defining variables
  float num2;

  cout << "Enter Number 1: " <<endl;  //user input
  cin >> num1;

  cout << "Enter Number 2: " <<endl;
  cin >> num2;
  
  float *fPtr1;    //pointer declaration
  float *fPtr2;
  
  fPtr1 = &num1;  //assigning var
  cout << *fPtr1;

  fPtr2 = &num2;  
  cout << *fPtr2;
  
  *fPtr1 ;  
  
  cout << number2 <<endl;    //display output
  cout << number1 <<endl;  
 
  
  return num1 + num2;    //return addition
}//end main