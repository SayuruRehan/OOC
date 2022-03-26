#include <iostream>
using namespace std;

int main() 
{
  float num1;
  float num2;

  cout << "Enter Number 1: " <<endl;
  cin >> num1;

  cout << "Enter Number 2: " <<endl;
  cin >> num2;
  
  float *fPtr1;  
  float *fPtr2;
  
  fPtr1 = &num1;  
  cout << *fPtr1;

  fPtr2 = &num2;  
  cout << *fPtr2;
  
  *fPtr1 ;  
  
  cout << number2 <<endl;  
  cout << number1 <<endl;  
 
  
  return num1 + num2;
}