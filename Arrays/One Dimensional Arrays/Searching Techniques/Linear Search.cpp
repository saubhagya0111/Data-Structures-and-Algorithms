#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m = 2, n = 2;
    int A[m][n] = {{1, 2}, {3, 4}};
    //Use nested braces and it serves the purpose in a better way as each pair denotes a unique row
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}
