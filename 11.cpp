// Write a program in C++ that takes a number as input and prints its multiplication table upto 10

#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int i = 0;

    cout << "enter any number ";
    cin >> num;
    cout << endl;
    for (i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }
    return 0;
}