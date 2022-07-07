#include <iostream>
using namespace std;
int main()
{
    int num1 = 0;
    int num2 = 0;
    cout << "enter num1 and num2 separated by space ";
    cin >> num1 >> num2;

    cout << endl
         << "after swapping " << endl;
    cout << "num1 == " << num1 << endl;
    cout << "num2 == " << num2 << endl;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "after swapping " << endl;
    cout << "num1 == " << num1 << endl;
    cout << "num2 == " << num2 << endl;
    return 0;
}