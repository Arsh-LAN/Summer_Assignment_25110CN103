#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    int A[10][10];

    // Input matrix
    cout << "\nEnter matrix elements:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> A[i][j];
        }
    }

    // Display transpose
    cout << "\nTranspose Matrix:\n";
    for(int i = 0; i < cols; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            cout << A[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}