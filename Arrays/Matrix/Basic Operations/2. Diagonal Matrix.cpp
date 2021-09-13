#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int n, element=0;
    cout << "Enter the size of the diagonal matrix\n";
    cin >> n;
    cout << "Enter the elements of the diagonal matrix\n";
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Elements of the 2D matrix are:-\n";
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
                cout << element << " ";
            }
            
        }
        cout << endl;
    }

    return 0;
}
