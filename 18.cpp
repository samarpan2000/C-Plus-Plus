/*

Write a program in C++ to calculate the volume of a Cone.
Write a program in C++ to calculate the volume of a cylinder

*/

#include <iostream>
using namespace std;
int main()
{
    float rCone = 0.0f;
    float h = 0.0f;
    float rCylinder = 0.0f;
    float hC = 0.0f;
    cout << "enter the radius of the cone and height ";
    cin >> rCone >> h;
    cout << "enter the radius of the cylinder and height ";
    cin >> rCylinder >> hC;
    cout << "volume of the cone is " << ((3.14 * rCone * rCone * h) / 3) << endl;
    cout << "volume of the cylinder is " << (3.14 * rCylinder * rCylinder * hC) << endl;

    return 0;
}