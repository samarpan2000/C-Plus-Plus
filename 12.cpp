/*Write a program in C++ to print the following pattern
        .    .       .        .
       01234567891011121314151617
    0   xxxxx
    1  x     x       x        x
    2  x             x        x
    3  x          xxxxxxx  xxxxxxx
    4  x             x        x
    5  x     x       x        x
    6   xxxxx


*/

#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    int j = 0;
    char ch = 'x';
    cout << endl;
    for (i = 0; i < 7; i++)
    {
        if (i == 0 || i == 6)
        {
            cout << ' ';
        }
        for (j = 0; j < 30; j++)
        {
            // for 1st and last line
            if ((i == 0 || i == 6) && (j >= 1) && (j <= 6))
            {

                cout << ch;
                if (j == 6)
                {
                    break;
                }
            }
            else if ((i == 3))
            {
                if ((j == 0) || (j >= 10 && j <= 16) || (j >= 19 && j <= 25))
                {
                    cout << ch;
                }
                else
                {
                    cout << ' ';
                }
            }
            else if ((i == 2) || (i == 4))
            {
                if ((j == 0) || (j == 13) || ((j == 22)))
                {
                    cout << ch;
                }
                else
                {
                    cout << ' ';
                }
            }
            else if ((i == 1) || (i == 5))
            {
                if ((j == 0) || (j == 7) || (j == 22) || (j == 13))
                {
                    cout << ch;
                }
                else
                {
                    cout << ' ';
                }
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}