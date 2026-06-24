#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    for(int i = 0; str[i] != '\0'; i++)
    {
        int count = 1;

        while(str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        cout << str[i] << count;
    }

    return 0;
}