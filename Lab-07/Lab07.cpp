#include <iostream>
#include "Distance.h"
using namespace std;



int main()
{
    // Ex_1
 /*   // default constructor
    Distance obdist1;
    obdist1.printDistance();
    obdist1.~Distance();

    // overload constructor
    Distance obdist2(11, 6.25);
    obdist2.printDistance();
    obdist2.~Distance();  */


    // Ex_2
  /*  // default constructor
    Distance *dist1 = new Distance();
    dist1->printDistance();

    // overload constructor
    Distance *dist2 = new Distance (11, 6.25);
    dist2->printDistance();
    dist2->~Distance();  */

    // Ex_3
    Distance dist1, dist3;

    Distance dist2(11, 6.25);

    dist1.inputDistance();  // read feet and inch from user
    dist3.addDistance(dist1, dist2);

    dist1.printDistance();
    dist2.printDistance();
    dist3.printDistance();


    return 0;


}
