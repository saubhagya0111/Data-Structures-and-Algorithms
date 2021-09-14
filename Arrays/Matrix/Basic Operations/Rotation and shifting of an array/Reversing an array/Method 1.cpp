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
    //Reversing the array using an auxiliary array 
    //Time mplexity:- O(N)
    for (int i = n - 1, j = 0; i > 0, j < n; i--, j++)
    {
        b[j] = a[i];
    }
    cout << "Elements of the array after reversing are\n";
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << endl;
    }

    return 0;
}
