#include <iostream>
using namespace std;
int main()
{
    //Time Complexity:- O(2n)
    //Time complexity is improved from O(n^2) by inserting the break statement thereby terminating the loop whenever the swapping does not take place
    int n;
    bool is_swapped = false;
    cout << "Enter the size of the array\n";
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j + 1] < A[j])
            {
                int temp = A[j + 1];
                A[j + 1] = A[j];
                A[j] = temp;
                is_swapped = true;
            }
        }
        if (is_swapped == 0)
        {
            cout << "Array is sorted\n";
            break;
        }
    }
    cout << "Elements of the array after sorting are:-\n";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}
