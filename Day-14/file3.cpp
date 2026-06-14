//Program to find the second largest element in an array <---
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

    int largest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    int secondLargest = arr[0];

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "Second largest element = " << secondLargest;

    return 0;
}