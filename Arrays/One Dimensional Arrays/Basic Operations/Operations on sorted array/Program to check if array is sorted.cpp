#include <iostream>
using namespace std;
bool is_sorted(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            return false;
            break;
        }
    }
    return true;
}
 //Time Complexity: O(N)
int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (is_sorted(a, n) == 0)
    {
        cout << "Array is not sorted\n";
    }
    else if (is_sorted(a, n) == 1)
    {
        cout << "Array is sorted\n";
    }

    return 0;
}
