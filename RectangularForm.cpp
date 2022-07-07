#include <iostream>
using namespace std;
int main()
{
    // row = 6
    // col=4;
    int a = 0.0f;
    int r = 0;
    int c = 0;
    cout << "enter any single digit number ";
    cin >> a;
    cout << endl;
    for (r = 1; r <= 6; r++)
    {

        for (c = 1; c <= 4; c++)
        {
            if (r == 1 || r == 6)
            {
                cout << a;
            }
            else if ((c == 1 || c == 4))
            {
                cout << a;
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}