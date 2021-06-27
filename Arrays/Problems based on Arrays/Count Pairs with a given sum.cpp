#include <iostream>
#define dontquit int main(void)
using namespace std;

dontquit
{
    ios_base::sync_with_stdio(0);
    int n, x;
    cout << "Enter the size of array\n";
    cin >> n;
    cout << "Enter the elements of the array\n";
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Enter the number corresponding to which pairs are to be printed\n";
    cin >> x;
    int c = 0;
    //Traversal of the elements and the corresponding elements are checked if they are equal 
    //Then the number is increased using the counter
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] + A[j] == x)
            {
                // cout << "(" << A[i] << "," << A[j] << endl;
                c++;
            }
        }
    }

    return 0;
}
