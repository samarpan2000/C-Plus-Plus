// Write a program in C++ to calculate the sum of all even and odd numbers in an array.

#include <iostream>
using namespace std;
int main()
{
    int arr[1000];
    int i = 0;
    int sumEven = 0;
    int sumOdd = 0;
    int size = 0;
    cout << "enter the size of array ";
    cin >> size;
    cout << "enter " << size << "elements " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < size; i++)
    {
        if ((arr[i] % 2) == 0)
        {
            sumEven += arr[i];
        }
        else if ((arr[i] % 2) == 1)
        {
            sumOdd += arr[i];
        }
    }
    cout << "THE SUM OF EVEN ELEMENTS " << sumEven << endl
         << "THE SUM OF ODD ELEMENTS " << sumOdd << endl;
}