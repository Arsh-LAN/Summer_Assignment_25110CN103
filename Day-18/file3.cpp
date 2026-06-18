// Binary search program for an array "only works for sorted array elements"

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int search;

    cout << "Enter element to search: ";
    cin >> search;

    int low = 0;
    int high = n - 1;
    int found = 0;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == search)
        {
            cout << "Element found at position " << mid;
            found = 1;
            break;
        }
        else if(search < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(found == 0)
    {
        cout << "Element not found";
    }

    return 0;
}