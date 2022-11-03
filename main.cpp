#include <iostream>
#include <cmath>

using namespace std;

int main()

{
   cout << "Radius of the circle:";

   double  Radius;
   cin >> Radius;

   double pi = 3.14;
   double area = pi * (Radius * Radius);

   cout << area;

 return 0;
}
