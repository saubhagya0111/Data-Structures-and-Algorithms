#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
    int a[n];
    int b[n];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //Swapping the corresponding elements of the array from its ends
    //Time complexity:- O(N)
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    cout << "Elements of the array after reversing are\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}
