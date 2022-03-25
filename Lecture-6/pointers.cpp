#include <iostream>
using namespace std;

int main()
{
  int *p = NULL;
  int count = 7;

  cout << "p = " << p << endl;
  cout << "count = " <<count<<endl;

  cout <<"Memory address of p = "<< &p <<endl;
  cout <<"Memory address of count = "<< &count <<endl;

  p = &count;
  cout <<"p = "<< p <<endl;
  cout <<"Value of the location pointed by p = "<< *p <<endl;

  *p = 10;             
  sum = sum + *p;
  cout <<"Now value of the location pointed by p = "<< *p <<endl;
  cout << "Count = " <<count <<endl;
}