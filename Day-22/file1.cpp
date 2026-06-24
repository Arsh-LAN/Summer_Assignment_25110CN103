#include <iostream>
using namespace std;

int main()
{
    string str;
    bool palindrome = true;

    cout << "Enter a string: ";
    cin >> str;

    int len = 0;

    while(str[len] != '\0')
    {
        len++;
    }

    for(int i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - 1 - i])
        {
            palindrome = false;
            break;
        }
    }

    if(palindrome)
    {
        cout << "Palindrome String";
    }
    else
    {
        cout << "Not a Palindrome String";
    }

    return 0;
}