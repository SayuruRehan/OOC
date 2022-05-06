#include <iostream>
using namespace std;

int main() {
  Rectangle rec1;
  Rectangle rec2(10, 5);

  cout << "Rectangle 1 = length - "
       << rec1.getLength()
       << ", width - "
       << rec1.getWidth()
       << endl;

  cout << "Rectangle 2 = length - "
       << rec2.getLength()
       << ", width - "
       << rec2.getWidth()
       << endl;

return 0;
}