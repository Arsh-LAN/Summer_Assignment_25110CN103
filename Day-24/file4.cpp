#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    stringstream ss(str);
    string words[100];
    string word;
    int n = 0;

    while(ss >> word)
    {
        bool duplicate = false;

        for(int i = 0; i < n; i++)
        {
            if(words[i] == word)
            {
                duplicate = true;
                break;
            }
        }

        if(!duplicate)
        {
            words[n] = word;
            n++;
        }
    }

    cout << "Sentence after removing duplicates: ";

    for(int i = 0; i < n; i++)
    {
        cout << words[i] << " ";
    }

    return 0;
}