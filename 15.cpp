// Write a language program in C++ which accepts the user's first and last name and print them in reverse order with a space between them.

#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    char name[100];
    int i = 0;
    int o_idx = 0;
    char output[100];
    cout << "enter your full name ";
    fgets(name, 100, stdin);
    for (i = strlen(name) - 1; i >= 0; i--)
    {
        output[o_idx++] = name[i];
    }
    output[o_idx] = '\0';

    cout << "NAME IN REVERSE ORDER IS " << output << endl;

    return 0;
}