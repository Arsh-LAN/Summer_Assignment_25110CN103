//Program to count the number of even and odd elements <---
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];
    int evenCount = 0;
    int oddCount = 0;

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if(arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    cout << "Number of even elements = " << evenCount << endl;
    cout << "Number of odd elements = " << oddCount;

    return 0;
}