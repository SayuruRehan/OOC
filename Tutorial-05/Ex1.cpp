#include <iostream>
using namespace std;

int main() 
{
  float number1 = 6.2;
  float number2 = 7.3;

  float *fPtr;  //Part1
  fPtr = &number1;  //Part2
  cout << *fPtr;  //Part3
  number2 = *fPtr;  //Part4

  cout << number2 <<endl;  //Part5
  cout << number1 <<endl;  //Part6
  cout << *fPtr <<endl;  //Part7
  
  return 0;
}