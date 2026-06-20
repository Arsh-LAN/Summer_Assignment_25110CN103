#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    int A[10][10], B[10][10], Sum[10][10];

    // Input first matrix
    cout << "\nEnter elements of First Matrix:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "\nEnter elements of Second Matrix:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> B[i][j];
        }
    }

    // Add matrices
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    cout << "\nSum of Matrices:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
