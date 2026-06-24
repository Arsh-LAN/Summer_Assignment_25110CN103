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
        cout << "Not Anagram";
        return 0;
    }

    bool anagram = true;

    for(int i = 0; str1[i] != '\0'; i++)
    {
        int count1 = 0, count2 = 0;

        for(int j = 0; str1[j] != '\0'; j++)
        {
            if(str1[i] == str1[j])
                count1++;
        }

        for(int j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
                count2++;
        }

        if(count1 != count2)
        {
            anagram = false;
            break;
        }
    }

    if(anagram)
        cout << "Anagram Strings";
    else
        cout << "Not Anagram Strings";

    return 0;
}