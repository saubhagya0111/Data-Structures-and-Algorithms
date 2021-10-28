#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of non zero elements in the matrix\n";
    //Storing the non zero elements of a diagonal matrix in a 1d array and then displaying them using nested loops in the form of a matrix
    cin >> n;
    int a[n];
    cout << "Enter the non zero elements of the matrix\n";
    //    for (int i = 0; i < n; i++)
    //     {
    //         cin >> a[i];
    //     }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The 2D Diagonal matrix is represented as follows\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << a[i] << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}
