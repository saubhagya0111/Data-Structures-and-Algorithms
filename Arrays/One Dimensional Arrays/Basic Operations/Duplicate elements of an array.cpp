#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int flag = 0;
    cout << "Enter the size of the array\n";
    cin >> n;
    cout << "Enter the elements of the array\n";
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    //Using nested loop in order to scan through the entire array and the inner loop has been assigned an initial value of i+1 so that the repetition of the elements can be avoided
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] == A[j])
            {
                flag = 1;
                cout << A[i] << endl;
            }
        }
    }
if (flag==0)
{
    cout << "No duplicate elements found\n";
}

    return 0;
}
