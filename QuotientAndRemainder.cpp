#include <iostream>

using namespace std;

int main()
{
    int rem = 0;
    int quotient = 0;
    int num1 = 0;
    int num2 = 0;
    cout << "enter any two number number ";
    cin >> num1 >> num2;
    quotient = num1 / num2;
    rem = num1 % num2;
    cout << "quotient = " << quotient << endl
         << "remainder = " << rem << endl;
    return 0;
}