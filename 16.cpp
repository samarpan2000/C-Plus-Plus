// Write a language program which accepts the radius of a circle from the user and compute the area and circumference.
#include <iostream>
using namespace std;
int main()
{
    float r = 0.0f;
    cout << "enter the radius of the circle ";
    cin >> r;
    cout << "area of the circle is " << (3.14 * r * r) << endl
         << "the circumference is " << (2 * 3.14 * r) << endl;

    return 0;
}