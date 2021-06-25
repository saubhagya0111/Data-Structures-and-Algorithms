#include <iostream>
#include <algorithm>
#define dontquit int main(void)
using namespace std;
int bin_search(int A[], int n, int x)
{
    int l = 0, h = (n - 1), m;
    while (l <= h)
    {
        m = (l + h) * 0.5;
        if (A[m] == x)
        {
            return m;
        }
        else if (A[m] > x)
        {
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return -1;
}
dontquit
{
    ios_base::sync_with_stdio(0);
    int A[] = {1, 3, 5, 48, 4521, 457, 31, 0, 1, 72, 1};
    int n = sizeof(A) / sizeof(A[0]);
    sort(A, A + n);
    cout << "Elements are;-\n";
    cout << bin_search(A, n, 457);
    return 0;
}
