#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n - 1];

    cout << "Enter " << n - 1 << " numbers: ";
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        arraySum = arraySum + arr[i];
    }

    int missingNumber = totalSum - arraySum;

    cout << "Missing number is: " << missingNumber << endl;

    return 0;
}