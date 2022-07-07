#include <iostream>

using namespace std;

int main()
{
    cout << "size of fundamental data types are" << endl;
    cout << "CHAR ----" << (sizeof(char)) << " bytes" << endl;
    cout << "SHORT ----" << (sizeof(short)) << " bytes" << endl;
    cout << "INTEGER ----" << (sizeof(int)) << " bytes" << endl;
    cout << "LONG ----" << (sizeof(long)) << " bytes" << endl;
    cout << "LONG LONG ----" << (sizeof(long long)) << " bytes" << endl;
    cout << "FLOAT ----" << (sizeof(float)) << " bytes" << endl;
    cout << "DOUBLE ----" << (sizeof(double)) << " bytes" << endl;
    cout << "INTEGER ----" << (sizeof(long double)) << " bytes" << endl;
    cout << "BOOL ----" << (sizeof(bool)) << " bytes" << endl;
    return 0;
}