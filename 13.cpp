//Write a program in C++ to print the area and perimeter of a rectangle

#include <iostream>
using namespace std;
int main()
{
    float l = 0.0f;
    float b = 0.0f;
    cout << "enter the length of the rectangle ";
    cin >> l;
    cout << "enter the breadth of the rectangle ";
    cin >> b;
    cout << "the area of the rectangle is " << (l * b) << endl;
    cout << "the perimeter of the rectangle is " << (2 * (l + b)) << endl;
    return 0;
}