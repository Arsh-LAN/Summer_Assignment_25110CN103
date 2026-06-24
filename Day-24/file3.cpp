#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    string word = "", longest = "";

    for(int i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            word += str[i];
        }
        else
        {
            if(word.length() > longest.length())
            {
                longest = word;
            }

            word = "";

            if(str[i] == '\0')
            {
                break;
            }
        }
    }

    cout << "Longest word: " << longest;

    return 0;
}