//Program to find the frequency of an element in an array <---
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Write the length of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: " << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int search;

    cout << "Enter the element whose frequency is to be found: ";
    cin >> search;

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == search)
        {
            count++;
        }
    }

    cout << "Frequency of " << search << " = " << count;

    return 0;
}