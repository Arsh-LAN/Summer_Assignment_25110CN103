#include <iostream>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if(str1.length() != str2.length())
    {
        cout << "Not a Rotation String";
        return 0;
    }

    bool found = false;

    for(int i = 0; i < str1.length(); i++)
    {
        char first = str1[0];

        for(int j = 0; j < str1.length() - 1; j++)
        {
            str1[j] = str1[j + 1];
        }

        str1[str1.length() - 1] = first;

        if(str1 == str2)
        {
            found = true;
            break;
        }
    }

    if(found)
        cout << "Rotation String";
    else
        cout << "Not a Rotation String";

    return 0;
}