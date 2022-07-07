#include <iostream>
using namespace std;
int main()
{
    float a = 0.0f;
    float b = 0.0f;
    float c = 0.0f;
    float d = 0.0f;
    cout << "enter any 4 numbers separated by space ";
    cin >> a >> b >> c >> d;
    cout << "average of 4 numbers " << ((a + b + c + d) / 4) << endl;
    return 0;
}