// Write a program in C++ to check whether a number is positive, negative or zero

#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    cout << "enter any number positive/negative/zero ";
    cin >> num;
    if (num > 0)
    {
        cout << num << " IS POSITIVE" << endl;
    }
    if (num == 0)
    {
        cout << num << " IS ZERO" << endl;
    }
    if (num < 0)
    {
        cout << num << " IS NEGATIVE" << endl;
    }
    return 0;
}