// Write a language program to get the volume of a sphere with radius 6.

#include <iostream>
using namespace std;
int main()
{
    float r = 0.0f;
    cout << "enter the radius of the sphere ";
    cin >> r;
    cout << "volume of the sphere is " << ((4 * 3.14 * r * r * r) / 3) << endl;

    return 0;
}